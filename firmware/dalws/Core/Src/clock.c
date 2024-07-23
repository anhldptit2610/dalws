#include "lvgl.h"
#include "lv_port.h"
#include "ui.h"
#include "clock.h"
#include "ds3231.h"
#include "hdc1080.h"
#include "test.h"

#define BUTTON_SET      0
#define BUTTON_UP       1
#define BUTTON_PMDR     2
#define BUTTON_PWR      3

#define MENU_OPTIONS    4

extern ds3231_t ds3231;
extern TIM_HandleTypeDef htim10;
extern TIM_HandleTypeDef htim11;
extern TIM_HandleTypeDef htim3;
volatile clk_mode_t clkMode;
volatile bool timeUp;
int pomodoroCnt;
bool buttonState[4];
int sec, min, hrs, year, mon, date;
int pmdrSec, pmdrMin;
uint16_t tempHumid[2];

struct xy {
    int x;
    int y;
} checkPos[4] = {
    {-39, -21},
    {-39, -10},
    {-39, 1},
    {-39, 12}
};

int daysOfMonth[12] = {
    31, 28, 31, 30,
    31, 30, 31, 31,
    30, 31, 30, 31
};

int find_day_from_date(int date, int mon, int year) 
{
    int oddDays, passedDays;
    bool isLeapYear, test;
    int ret;
    
    if ((date >= 1 && mon > 1 && year >= 2024) || (date > 1 && mon == 1 && year == 2024))
        test = 1;
    else
        test = 0;
    // find out which day is Jan 1st year
    oddDays = 0;
    if (year < 2024) {
        for (int i = year; i < 2024; i++) {
            if (!(i % 4) && ((i % 100) || (!(i % 100) && !(i % 400))))
                oddDays += 2;
            else
                oddDays += 1;
        }
    } else if (year >= 2024) {
        for (int i = 2024; i < year; i++) {
            if (!(i % 4) && ((i % 100) || (!(i % 100) && !(i % 400))))
                oddDays += 2;
            else
                oddDays += 1;
        }
    }
    oddDays = oddDays % 7;
     
    // how many days passed since Jan 1st year to date/mon/year?
    isLeapYear = (!(year % 4) && ((year % 100) || (!(year % 100) && !(year % 400))));
    passedDays = isLeapYear;
    for (int i = 0; i < mon - 1; i++)
        passedDays += daysOfMonth[i];
    passedDays += date;
     
    // ok, now find out which day is date/mon/year...
    passedDays = passedDays % 7;

    if (year <= 2024)
        ret = ((6 - oddDays + passedDays) % 7) + test;
    else
        ret = (oddDays + passedDays) % 7;
    return ret;
}

void clk_set_mode(int mode)
{
    switch (mode) {
    case CLK_MODE_SET_TIME:
        clkMode = CLK_MODE_SET_TIME_SEC;
        lv_label_set_text(ui_Label18, "set time");
        lv_label_set_text(ui_Label5, "");
        lv_label_set_text(ui_Label10, "");
        lv_label_set_text(ui_Label11, "sec");
        lv_scr_load(ui_setTime);
        sec = ((ds3231.reg[0] >> 4) * 10) + (ds3231.reg[0] & 0x0f);
        min = ((ds3231.reg[1] >> 4) * 10) + (ds3231.reg[1] & 0x0f);
        hrs = (((ds3231.reg[2] >> 4) & 0x01) * 10) + (ds3231.reg[2] & 0x0f);
        break;
    case CLK_MODE_SET_DATE:
        clkMode = CLK_MODE_SET_DATE_YRS;
        year = 2024;
        mon = 1;
        date = 1;
        lv_scr_load(ui_setDate);
        break;
    case CLK_MODE_SET_ALARM:
        clkMode = CLK_MODE_SET_ALARM_SEC;
        lv_label_set_text(ui_Label18, "set alrm");
        lv_label_set_text(ui_Label5, "");
        lv_label_set_text(ui_Label10, "");
        lv_label_set_text(ui_Label11, "sec");
        lv_scr_load(ui_setTime);
        sec = ((ds3231.reg[0] >> 4) * 10) + (ds3231.reg[0] & 0x0f);
        min = ((ds3231.reg[1] >> 4) * 10) + (ds3231.reg[1] & 0x0f);
        hrs = (((ds3231.reg[2] >> 4) & 0x01) * 10) + (ds3231.reg[2] & 0x0f);
        break;
    case CLK_MODE_POMODORO:
        clkMode = CLK_MODE_POMODORO_WORK;
        pomodoroCnt = 1;
        timeUp = false;
        pmdrSec = 0;
        pmdrMin = 25;
        lv_scr_load(ui_pomodoro1);
        // TODO
        break;
    default:
        break;
    }
}

void pomodoro_run(void)
{
    bool minPassed = false;

    if (!pmdrMin && !pmdrSec) {
        timeUp = true;
        HAL_GPIO_WritePin(LED_GPIO_Port, LED_Pin, 0);
        HAL_TIM_PWM_Start(&htim3, TIM_CHANNEL_1);
        return;
    }

    if (!pmdrSec) {
        minPassed = true;
        pmdrSec = 59;
    } else {
        pmdrSec--;
    }
    pmdrMin = (minPassed) ? pmdrMin - 1 : pmdrMin;
}

void clk_run(bool oneSec)
{
    static int currOpt;
    static bool isLeapYear;

    switch (clkMode) {
    case CLK_MODE_NORMAL:
        if (buttonState[BUTTON_SET]) {
            lv_scr_load(ui_mainMenu);
            clkMode = CLK_MODE_MENU;
            currOpt = 0;
        }
        break;
    case CLK_MODE_MENU:
        if (buttonState[BUTTON_UP]) {
            currOpt = (currOpt + 1) % MENU_OPTIONS;
        } else if (buttonState[BUTTON_PMDR]) {
            currOpt = (currOpt == 0) ? MENU_OPTIONS - 1 : currOpt - 1;
        } else if (buttonState[BUTTON_SET]) {
            clk_set_mode(currOpt);            
        }
        lv_obj_set_x(ui_check, checkPos[currOpt].x);
        lv_obj_set_y(ui_check, checkPos[currOpt].y);
        break; 
    case CLK_MODE_SET_TIME_SEC:
        if (buttonState[BUTTON_UP])
            sec = (sec + 1) % 60;
        else if (buttonState[BUTTON_PMDR])
            sec = (!sec) ? 59 : (sec - 1);
        else if (buttonState[BUTTON_SET]) {
            lv_label_set_text(ui_Label5, "");
            lv_label_set_text(ui_Label10, "min");
            lv_label_set_text(ui_Label11, "");
            clkMode = CLK_MODE_SET_TIME_MIN;
        }
        break;
    case CLK_MODE_SET_TIME_MIN:
        if (buttonState[BUTTON_UP])
            min = (min + 1) % 60;
        else if (buttonState[BUTTON_PMDR])
            min = (!min) ? 59 : (min - 1);
        else if (buttonState[BUTTON_SET]) {
            lv_label_set_text(ui_Label5, "hrs");
            lv_label_set_text(ui_Label10, "");
            lv_label_set_text(ui_Label11, "");
            clkMode = CLK_MODE_SET_TIME_HRS;
        }
        break;
    case CLK_MODE_SET_TIME_HRS:
        if (buttonState[BUTTON_UP])
            hrs = (hrs + 1) % 60;
        else if (buttonState[BUTTON_PMDR])
            hrs = (!hrs) ? 23 : (hrs - 1);
        else if (buttonState[BUTTON_SET]) {
            lv_scr_load(ui_default);
            ds3231_set_time(&ds3231, sec, min, hrs);
            clkMode = CLK_MODE_NORMAL;
        }
        break;
    case CLK_MODE_SET_DATE_YRS:
        if (buttonState[BUTTON_UP])
            year = year + 1;
        else if (buttonState[BUTTON_PMDR])
            year = year - 1;
        else if (buttonState[BUTTON_SET]) {
            isLeapYear = (!(year % 4) && (year % 100)) || 
                        (!(year % 100) && !(year % 400));
            clkMode = CLK_MODE_SET_DATE_MON;
        }
        break;
    case CLK_MODE_SET_DATE_MON:
        if (buttonState[BUTTON_UP]) {
            mon = (mon + 1) % 13;
            if (!mon)
                mon += 1;
        } else if (buttonState[BUTTON_PMDR]) {
            mon = (mon == 1) ? 12 : mon - 1;
        } else if (buttonState[BUTTON_SET]) {
            clkMode = CLK_MODE_SET_DATE_DATE;
        }
        break;
    case CLK_MODE_SET_DATE_DATE:
        if (buttonState[BUTTON_UP])
            date = (date + 1) % (daysOfMonth[mon - 1] + ((mon - 1 == 1) ? (int)isLeapYear : 0));
        else if (buttonState[BUTTON_PMDR])
            date = (date == 1) ? (daysOfMonth[mon - 1] + ((mon - 1 == 1) ? (int)isLeapYear : 0) - 1) : date - 1;
        else if (buttonState[BUTTON_SET]) {
            lv_scr_load(ui_default);
            ds3231_set_date(&ds3231, find_day_from_date(date, mon, year), date, mon, year);
            clkMode = CLK_MODE_NORMAL;
        }
        break;
    case CLK_MODE_SET_ALARM_SEC:
        if (buttonState[BUTTON_UP])
            sec = (sec + 1) % 60;
        else if (buttonState[BUTTON_PMDR])
            sec = (!sec) ? 59 : (sec - 1);
        else if (buttonState[BUTTON_SET]) {
            lv_label_set_text(ui_Label5, "");
            lv_label_set_text(ui_Label10, "min");
            lv_label_set_text(ui_Label11, "");
            clkMode = CLK_MODE_SET_ALARM_MIN;
        }
        break;
    case CLK_MODE_SET_ALARM_MIN:
        if (buttonState[BUTTON_UP])
            min = (min + 1) % 60;
        else if (buttonState[BUTTON_PMDR])
            min = (!min) ? 59 : (min - 1);
        else if (buttonState[BUTTON_SET]) {
            lv_label_set_text(ui_Label5, "hrs");
            lv_label_set_text(ui_Label10, "");
            lv_label_set_text(ui_Label11, "");
            clkMode = CLK_MODE_SET_ALARM_HRS;
        }
        break;
    case CLK_MODE_SET_ALARM_HRS:
        if (buttonState[BUTTON_UP]) {
            hrs = (hrs + 1) % 60;
        } else if (buttonState[BUTTON_PMDR]) {
            hrs = (!hrs) ? 23 : (hrs - 1);
        } else if (buttonState[BUTTON_SET]) {
            lv_scr_load(ui_default);
            clkMode = CLK_MODE_NORMAL;
            ds3231_set_day_alarm(&ds3231, sec, min, hrs);
        }
        break;
    case CLK_MODE_ALARM_TRIGGER:
        if (buttonState[BUTTON_SET]) {
            ds3231_turn_off_alarm(&ds3231);
            HAL_TIM_PWM_Stop(&htim3, TIM_CHANNEL_1);
            HAL_GPIO_WritePin(DS3231_nINT_GPIO_Port, DS3231_nINT_Pin, 1);
            HAL_GPIO_WritePin(LED_GPIO_Port, LED_Pin, 1);
            lv_label_set_text(ui_status, "");
            clkMode = CLK_MODE_NORMAL;
            lv_scr_load(ui_default);
        }
        break;
    case CLK_MODE_POMODORO_WORK:
        if (oneSec)
            pomodoro_run();
        if (buttonState[BUTTON_SET]) {
            lv_label_set_text(ui_status, "");
            clkMode = CLK_MODE_NORMAL;
            lv_scr_load(ui_default);
        } else if (buttonState[BUTTON_PMDR] && timeUp) {
            HAL_GPIO_WritePin(LED_GPIO_Port, LED_Pin, 1);
            HAL_TIM_PWM_Stop(&htim3, TIM_CHANNEL_1);
            timeUp = false;
            if (pomodoroCnt == 4) {
                pmdrSec = 0;
                pmdrMin = 15;
                clkMode = CLK_MODE_POMODORO_REST_LONG;
            } else if (pomodoroCnt < 4) {
                pmdrSec = 0;
                pmdrMin = 5;
                clkMode = CLK_MODE_POMODORO_REST_SHORT;
            }
        }
        break;
    case CLK_MODE_POMODORO_REST_SHORT:
        if (oneSec)
            pomodoro_run();
        if (buttonState[BUTTON_SET]) {
            lv_label_set_text(ui_status, "");
            clkMode = CLK_MODE_NORMAL;
            lv_scr_load(ui_default);
        } else if (buttonState[BUTTON_PMDR] && timeUp) {
            HAL_GPIO_WritePin(LED_GPIO_Port, LED_Pin, 1);
            HAL_TIM_PWM_Stop(&htim3, TIM_CHANNEL_1);
            timeUp = false;
            lv_label_set_text(ui_status, "work");
            clkMode = CLK_MODE_POMODORO_WORK;
            pmdrSec = 0;
            pmdrMin = 25;
            pomodoroCnt++;
        }
        break;
    case CLK_MODE_POMODORO_REST_LONG:
        if (oneSec)
            pomodoro_run();
        if (buttonState[BUTTON_SET]) {
            lv_label_set_text(ui_status, "");
            clkMode = CLK_MODE_NORMAL;
            lv_scr_load(ui_default);
        } else if (buttonState[BUTTON_PMDR] && timeUp) {
            HAL_GPIO_WritePin(LED_GPIO_Port, LED_Pin, 1);
            HAL_TIM_PWM_Stop(&htim3, TIM_CHANNEL_1);
            timeUp = false;
            lv_label_set_text(ui_status, "work");
            clkMode = CLK_MODE_POMODORO_WORK;
            pmdrSec = 0;
            pmdrMin = 25;
            pomodoroCnt = 1;
        }
        break;
    default:
        break;
    }
}

void clk_init(void)
{
    clkMode = CLK_MODE_NORMAL;
    date = 1;
    mon = 1;
    year = 2024;
    ds3231_set_date(&ds3231, MON + 1, date, mon, year);
}

void button_scan(bool *buttonState)
{
  static bool setPrevState = 1, setState = 1, upPrevState = 1, upState = 1, pmdrPrevState = 1, pmdrState = 1;

  setState = HAL_GPIO_ReadPin(SET_BTN_GPIO_Port, SET_BTN_Pin);
  buttonState[BUTTON_SET] = !setState && setPrevState;
  setPrevState = setState;
  upState = HAL_GPIO_ReadPin(UP_BTN_GPIO_Port, UP_BTN_Pin);
  buttonState[BUTTON_UP] = !upState && upPrevState;
  upPrevState = upState;
  pmdrState = HAL_GPIO_ReadPin(PMDR_BTN_GPIO_Port, PMDR_BTN_Pin);
  buttonState[BUTTON_PMDR] = !pmdrState && pmdrPrevState;
  pmdrPrevState = pmdrState;
}



void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
    static int i = 0, oneSec = 0, realTemp, realHumid;
    static bool getTempHumid = 0;
    static char str[10];

    if (htim == &htim10) {
        if (!getTempHumid) {
            hdc1080_send_data_request();
            getTempHumid = 1;
        } else if (getTempHumid) {
            getTempHumid = 0;
            hdc1080_get_data(tempHumid);
            realTemp = (tempHumid[0]  * 165) / 65535 - 40;
            lv_snprintf(str, 10, "%d\n", (int)realTemp);
            lv_label_set_text(ui_tempnum, str);
            realHumid = (tempHumid[1]  * 100) / 65536;
            lv_snprintf(str, 10, "%d", (int)realHumid);
            lv_label_set_text(ui_humidnum, str);
        }
        oneSec = (i == 10);
        i = (i == 10) ? 0 : i + 1;
        button_scan(buttonState);
        clk_run(oneSec);
        if (clkMode == CLK_MODE_NORMAL)
            ds3231_read_stream(&ds3231);
        if ((clkMode != CLK_MODE_NORMAL) && (clkMode != CLK_MODE_ALARM_TRIGGER) && (clkMode < CLK_MODE_POMODORO_WORK)) {
            display_time(clkMode, sec, min, hrs);
            display_date(clkMode, 0, date, mon, year);
        } else if (clkMode >= CLK_MODE_POMODORO_WORK) {
            display_time(clkMode, pmdrSec, pmdrMin, 0);         
        } else {
            display_time(clkMode, ds3231.reg[0], ds3231.reg[1], ds3231.reg[2]);
            display_date(clkMode, ds3231.reg[DS3231_REG_DAY], ds3231.reg[DS3231_REG_DATE], ds3231.reg[DS3231_REG_MONTH], year);
        }
    }
}

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
    if (GPIO_Pin == DS3231_nINT_Pin) {
        HAL_GPIO_WritePin(LED_GPIO_Port, LED_Pin, GPIO_PIN_RESET);
        lv_label_set_text(ui_status, "triggered!");
        __HAL_TIM_SET_AUTORELOAD(&htim3, 20 * 2);
        __HAL_TIM_SET_COMPARE(&htim3, TIM_CHANNEL_1, 20);
        HAL_TIM_PWM_Start(&htim3, TIM_CHANNEL_1);
        clkMode = CLK_MODE_ALARM_TRIGGER;
    }

}