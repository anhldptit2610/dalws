#include "hdc1080.h"

I2C_HandleTypeDef *i2cHandler = NULL;
uint16_t tempHump[2];

uint16_t *hdc1080_get_data(void)
{
    uint8_t reg = 0x00, data[2];

    HAL_I2C_Master_Transmit(i2cHandler, HDC1080_WRITE, (uint8_t *)&reg, 1, 100);
    HAL_Delay(7);
    reg = HDC1080_TEMP;
    HAL_I2C_Master_Receive(i2cHandler, HDC1080_READ, (uint8_t *)data, 2, 100);
    tempHump[0] = TO_U16(data[1], data[0]);
    reg = HDC1080_HUMID;
    HAL_I2C_Master_Receive(i2cHandler, HDC1080_READ, (uint8_t *)data, 2, 100);
    tempHump[1] = TO_U16(data[1], data[0]);
    return tempHump;
}

void hdc1080_init(I2C_HandleTypeDef *hi2c)
{
    uint8_t data[3];
    uint16_t val;
    i2cHandler = hi2c;

    HAL_Delay(15);
    data[0] = HDC1080_CONF;
    // acquisite both temp and humid, 14-bit resolution
    val = 0x00 | HDC1080_ACQ_MODE_FULL;
    data[1] = LBYTE(val);
    data[2] = RBYTE(val);
    HAL_I2C_Master_Transmit(i2cHandler, HDC1080_WRITE, data, 3, 100);
}