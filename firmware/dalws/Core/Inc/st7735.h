#ifndef ST7735_H 
#define ST7735_H

#include "main.h"
#include <stdbool.h>

#define SCREEN_WIDTH    160
#define SCREEN_HEIGHT   80

#define CS_ON       0
#define CS_OFF      1
#define RESET_ON    0
#define RESET_OFF   1
#define DC_COMMAND  0
#define DC_DATA     1

#define CMD_NOP         0x00
#define CMD_SWRESET     0x01

#define CMD_SLPIN       0x10
#define CMD_SLPOUT      0x11
#define CMD_PTLON       0x12
#define CMD_NORON       0x13

#define CMD_INVOFF      0x20
#define CMD_INVON       0x21
#define CMD_GAMSET      0x26
#define CMD_DISPOFF     0x28
#define CMD_DISPON      0x29
#define CMD_CASET       0x2a
#define CMD_RASET       0x2b
#define CMD_RAMWR       0x2c

#define CMD_PTLAR       0x30
#define CMD_TEOFF       0x34
#define CMD_TEON        0x35
#define CMD_MADCTL      0x36
#define CMD_COLMOD      0x3a     

#define CMD_FRMCTR1     0xb1
#define CMD_FRMCTR2     0xb2
#define CMD_FRMCTR3     0xb3
#define CMD_INVCTR      0xb4
#define CMD_DISSET5     0xb6

#define CMD_PWCTR1      0xc0
#define CMD_PWCTR2      0xc1
#define CMD_PWCTR3      0xc2
#define CMD_PWCTR4      0xc3
#define CMD_PWCTR5      0xc4
#define CMD_VMCTR1      0xc5

#define CMD_PWCTR6      0xfc

#define CMD_GMCTRP1     0xe0
#define CMD_GMCTRN1     0xe1

typedef enum {
    PLAIN_SPI,
    DMA
} st7735_flush_t;

void st7735_init(SPI_HandleTypeDef *hspi);
void st7735_draw_bitmap(uint16_t *bitMap);
void st7735_send_cmd(uint8_t cmd);
void st7735_set_cs(bool cs);
#endif