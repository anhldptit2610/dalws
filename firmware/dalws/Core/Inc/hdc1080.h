#ifndef HDC1080_H
#define HDC1080_H

#include "main.h"

#define HDC1080_ADDR            0x40

#define HDC1080_TEMP            0x00
#define HDC1080_HUMID           0x01

#define HDC1080_CONF            0x02
#define HDC1080_ACQ_MODE_FULL   (1U << 12)
#define HDC1080_TEMP_14_BIT     ~(1U << 10)
#define HDC1080_HUMID_14_BIT    ~(1U << 8)

#define HDC1080_PART_ID1        0xfb
#define HDC1080_PART_ID2        0xfc
#define HDC1080_PART_ID3        0xfd
#define HDC1080_TI_ID           0xfe
#define HDC1080_DEV_ID          0xff

#define TO_U16(lsbyte, msbyte)      ((uint16_t)((msbyte) << 8) | (uint16_t)(lsbyte))

typedef enum {
    HDC1080_READ = (HDC1080_ADDR << 1) | 0x01,
    HDC1080_WRITE = (HDC1080_ADDR << 1),
} hdc1080_opr_t;

void hdc1080_init(I2C_HandleTypeDef *hi2c);
uint16_t *hdc1080_get_data(void);

#endif