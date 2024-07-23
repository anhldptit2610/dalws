#ifndef DS3231_H
#define DS3231_H

#include "main.h"
#include <stdbool.h>

#define DS3231_ADDR                     (0x68 << 1U)
#define DS3231_WRITE                    DS3231_ADDR
#define DS3231_READ                     (DS3231_ADDR | (1U << 7))

#define DS3231_REG_SECOND               0x00
#define DS3231_REG_MINUTE               0x01

#define DS3231_REG_HOUR                 0x02
#define DS3231_HOUR_1224                (1U << 7)
#define DS3231_HOUR_AMPM                (1U << 6)

#define DS3231_REG_DAY                  0x03
#define DS3231_REG_DATE                 0x04
#define DS3231_REG_MONTH                0x05
#define DS3231_REG_YEAR                 0x06
#define DS3231_REG_ALARM1_SECONDS       0x07
#define DS3231_ALARM1_SECONDS_A1M1      (1U << 7)
#define DS3231_REG_ALARM1_MINUTES       0x08
#define DS3231_ALARM1_MINUTES_A1M2      (1U << 7)
#define DS3231_REG_ALARM1_HOURS         0x09
#define DS3231_ALARM1_HOURS_A1M3        (1U << 7)
#define DS3231_REG_ALARM1_DAYDATE       0x0a
#define DS3231_ALARM1_DAYDATE_A1M4      (1U << 7)
#define DS3231_REG_ALARM2_MINUTES       0x0b
#define DS3231_ALARM2_MINUTES_A2M2      (1U << 7)
#define DS3231_REG_ALARM2_HOURS         0x0c
#define DS3231_ALARM2_HOURS_A2M3        (1U << 7)
#define DS3231_REG_ALARM2_DAYDATE       0x0d
#define DS3231_ALARM2_DAYDATE_A2M4      (1U << 7)
#define DS3231_REG_CONTROL              0x0e
#define DS3231_CONTROL_A1IE             (1U << 0)
#define DS3231_CONTROL_A2IE             (1U << 1)
#define DS3231_CONTROL_INTCN            (1U << 2)
#define DS3231_REG_STATUS               0x0f
#define DS3231_REG_AGING_OFFSET         0x10
#define DS3231_REG_TEMP_MSB             0x11
#define DS3231_REG_TEMP_LSB             0x12

typedef enum {
    MON = 1,
    TUE,
    WED,
    THU,
    FRI,
    SAT,
    SUN,
} day_t;

typedef enum {
    JAN = 1,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC,
} month_t;

enum {
    AM,
    PM
};

typedef struct {
    I2C_HandleTypeDef *i2cHandler;
    uint8_t reg[18];
} ds3231_t;

void ds3231_init(I2C_HandleTypeDef *i2cHandler, ds3231_t *ds3231);
void ds3231_read_stream(ds3231_t *ds3231);
void ds3231_set_time(ds3231_t *ds3231, int sec, int min, int hrs);
void ds3231_set_date(ds3231_t *ds3231, day_t day, int ordinal, month_t month, int year);
void ds3231_set_day_alarm(ds3231_t *ds3231, int sec, int min, int hrs);
void ds3231_turn_off_alarm(ds3231_t *ds3231);




#endif