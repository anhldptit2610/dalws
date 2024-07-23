#ifndef CLOCK_H
#define CLOCK_H

#include "main.h"
#include <stdbool.h>

typedef enum {
    CLK_MODE_SET_TIME,
    CLK_MODE_SET_DATE,
    CLK_MODE_SET_ALARM,
    CLK_MODE_POMODORO,
    CLK_MODE_NORMAL,
    CLK_MODE_MENU,
    CLK_MODE_SET_TIME_SEC,
    CLK_MODE_SET_TIME_MIN,
    CLK_MODE_SET_TIME_HRS,
    CLK_MODE_SET_DATE_DATE,
    CLK_MODE_SET_DATE_MON,
    CLK_MODE_SET_DATE_YRS,
    CLK_MODE_SET_ALARM_SEC,
    CLK_MODE_SET_ALARM_MIN,
    CLK_MODE_SET_ALARM_HRS,
    CLK_MODE_ALARM_TRIGGER,
    CLK_MODE_POMODORO_WORK,
    CLK_MODE_POMODORO_REST_SHORT,
    CLK_MODE_POMODORO_REST_LONG,
} clk_mode_t;

void button_scan(bool *buttonState);
void clk_run(bool oneSec);
void clk_init(void);
void clk_set_mode(int mode);
void display_temp_humid(void);

#endif