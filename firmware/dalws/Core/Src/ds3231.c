#include "ds3231.h"

uint8_t ds3231_addr = 0x68 << 1;

void ds3231_write_reg(ds3231_t *ds3231, uint8_t reg, uint8_t data)
{
    uint8_t writeData[2] = {reg, data};
    HAL_I2C_Master_Transmit(ds3231->i2cHandler, DS3231_ADDR, (uint8_t *)writeData, 2, 100);
}

uint8_t ds3231_read_reg(ds3231_t *ds3231, uint8_t reg)
{
    uint8_t ret;

    HAL_I2C_Master_Transmit(ds3231->i2cHandler, DS3231_ADDR, (uint8_t *)&reg, 1, 100);
    HAL_I2C_Master_Receive(ds3231->i2cHandler, DS3231_ADDR, (uint8_t *)&ret, 1, 100);
    return ret;
}

void ds3231_read_stream(ds3231_t *ds3231)
{
    uint8_t sendData = DS3231_REG_SECOND;

    HAL_I2C_Master_Transmit(ds3231->i2cHandler, DS3231_ADDR, (uint8_t *)&sendData, 1, 100);
    if (HAL_I2C_Master_Receive(ds3231->i2cHandler, DS3231_ADDR, (uint8_t *)ds3231->reg, 18, 100) != HAL_OK) {
        HAL_GPIO_WritePin(LED_GPIO_Port, LED_Pin, 1);
    }
}

void ds3231_set_time(ds3231_t *ds3231, int sec, int min, int hrs)
{
    sec %= 60;
    min %= 60;
    hrs %= 24;
    ds3231_write_reg(ds3231, DS3231_REG_SECOND, ((sec / 10) << 4) | (sec % 10));
    ds3231_write_reg(ds3231, DS3231_REG_MINUTE, ((min / 10) << 4) | (min % 10));
    ds3231_write_reg(ds3231, DS3231_REG_HOUR, ((hrs / 10) << 4) | (hrs % 10));
}

/* day: 1 equals Monday, 7 equals Sunday 
   month: 1 equals January and so on
*/
void ds3231_set_date(ds3231_t *ds3231, day_t day, int ordinal, month_t month, int year)
{
    year %= 100;
    ds3231_write_reg(ds3231, DS3231_REG_DAY, day);
    ds3231_write_reg(ds3231, DS3231_REG_DATE, ((ordinal / 10) << 4) | (ordinal % 10));
    ds3231_write_reg(ds3231, DS3231_REG_MONTH, month);
    ds3231_write_reg(ds3231, DS3231_REG_YEAR, ((year / 10) << 4) | (year % 10));
}

void ds3231_set_day_alarm(ds3231_t *ds3231, int sec, int min, int hrs)
{
    ds3231->reg[DS3231_REG_CONTROL] |= DS3231_CONTROL_A1IE;
    ds3231_write_reg(ds3231, DS3231_REG_CONTROL, ds3231->reg[DS3231_REG_CONTROL]);
    ds3231_write_reg(ds3231, DS3231_REG_ALARM1_DAYDATE, ds3231->reg[0x0a] | DS3231_ALARM1_DAYDATE_A1M4);
    ds3231_write_reg(ds3231, DS3231_REG_ALARM1_SECONDS, ((sec / 10) << 4) | (sec % 10));
    ds3231_write_reg(ds3231, DS3231_REG_ALARM1_MINUTES, ((min / 10) << 4) | (min % 10));
    ds3231_write_reg(ds3231, DS3231_REG_ALARM1_HOURS, ((hrs / 10) << 4) | (hrs % 10));
}

void ds3231_turn_off_alarm(ds3231_t *ds3231)
{
    ds3231_write_reg(ds3231, DS3231_REG_STATUS, ds3231->reg[0x0f] & ~(1U << 0));
}

void ds3231_init(I2C_HandleTypeDef *i2cHandler, ds3231_t *ds3231)
{
    ds3231->i2cHandler = i2cHandler;
    ds3231_read_stream(ds3231);
    ds3231->reg[DS3231_REG_CONTROL] |=  DS3231_CONTROL_INTCN;
    ds3231->reg[DS3231_REG_CONTROL] &=  ~DS3231_CONTROL_A1IE;
    ds3231->reg[DS3231_REG_CONTROL] &= ~DS3231_CONTROL_A2IE;
    ds3231_write_reg(ds3231, DS3231_REG_ALARM1_SECONDS, 0);
    ds3231_write_reg(ds3231, DS3231_REG_ALARM1_MINUTES, 0);
    ds3231_write_reg(ds3231, DS3231_REG_ALARM1_HOURS, 0);
    ds3231_write_reg(ds3231, DS3231_REG_CONTROL, ds3231->reg[DS3231_REG_CONTROL]);
}
