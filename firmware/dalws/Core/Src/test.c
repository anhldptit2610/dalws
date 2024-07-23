#include "test.h"
#include "clock.h"
#include <stdio.h>

char day2Str[8][4] = {
    "MON",
    "TUE",
    "WED",
    "THU",
    "FRI",
    "SAT",
    "SUN"
};

char month2Str[12][4] = {
    "JAN", "FEB", "MAR", "APR",
    "MAY", "JUN", "JUL", "AUG",
    "SEP", "OCT", "NOV", "DEC",
};

void display_time(int mode, uint8_t sec, uint8_t min, uint8_t hrs)
{
    char str[10];
    
    lv_obj_t *time_sec, *time_min, *time_hrs;
    
    switch (mode) {
    case CLK_MODE_NORMAL:
    case CLK_MODE_ALARM_TRIGGER:
        time_sec = ui_second;
        time_min = ui_min;
        time_hrs = ui_hour;
        sec = (sec >> 4) * 10 + (sec & 0x0f);
        min = (min >> 4) * 10 + (min & 0x0f);
        hrs = ((hrs >> 4) & 0x01) * 10 + (hrs & 0x0f);
        break;
    case CLK_MODE_SET_TIME_HRS:
    case CLK_MODE_SET_TIME_MIN:
    case CLK_MODE_SET_TIME_SEC:
    case CLK_MODE_SET_ALARM_HRS:
    case CLK_MODE_SET_ALARM_MIN:
    case CLK_MODE_SET_ALARM_SEC:
        time_sec = ui_second1;
        time_min = ui_min1;
        time_hrs = ui_hour1;
        break;
    case CLK_MODE_POMODORO_REST_LONG:
    case CLK_MODE_POMODORO_REST_SHORT:
    case CLK_MODE_POMODORO_WORK:
        time_sec = ui_second2;
        time_min = ui_min2;
        lv_snprintf(str, 100, "%d", sec);
        lv_label_set_text(time_sec, str);
        lv_snprintf(str, 100, "%d", min);
        lv_label_set_text(time_min, str);
        return;
    default:
        return;
    }

    lv_snprintf(str, 100, "%d", sec);
    lv_label_set_text(time_sec, str);
    lv_snprintf(str, 100, "%d", min);
    lv_label_set_text(time_min, str);
    lv_snprintf(str, 100, "%d", hrs);
    lv_label_set_text(time_hrs, str);
}

void display_date(int mode, int day, int date, int month, int year)
{
    char str[10];

    lv_obj_t *date_day, *date_date, *date_mon, *date_year;
    
    switch (mode) {
    case CLK_MODE_NORMAL:
    case CLK_MODE_ALARM_TRIGGER:
        date_day = ui_day;
        date_date = ui_ordinal;
        date_mon = ui_month;
        date_year = ui_year;
        date = (date >> 4) * 10 + (date & 0x0f);
        month = (month >> 4) * 10 + (month & 0x0f);
        lv_label_set_text(date_day, day2Str[day - 1]);
        break;
    case CLK_MODE_SET_DATE_DATE:
    case CLK_MODE_SET_DATE_MON:
    case CLK_MODE_SET_DATE_YRS:
        date_day = NULL;
        date_date = ui_ordinal1;
        date_mon = ui_month1;
        date_year = ui_year1;
        break;
    case CLK_MODE_POMODORO_REST_LONG:
    case CLK_MODE_POMODORO_REST_SHORT:
    case CLK_MODE_POMODORO_WORK:
        return;
    default:
        return;
    }

    lv_snprintf(str, 100, "%d", date);
    lv_label_set_text(date_date, str);
    lv_label_set_text(date_mon, month2Str[month - 1]);
    lv_snprintf(str, 100, "%d", year);
    lv_label_set_text(date_year, str);
}