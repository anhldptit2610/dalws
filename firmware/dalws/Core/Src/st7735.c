#include "st7735.h"

SPI_HandleTypeDef *spiHandler;

void st7735_set_cs(bool cs)
{
    HAL_GPIO_WritePin(ST7735_CS_GPIO_Port, ST7735_CS_Pin, cs);
}

void st7735_set_reset(bool res)
{
    HAL_GPIO_WritePin(ST7735_RESET_GPIO_Port, ST7735_RESET_Pin, res);
}

void st7735_set_dc(bool dc)
{
    HAL_GPIO_WritePin(ST7735_RS_GPIO_Port, ST7735_RS_Pin, dc);
}

/*
    st7735_send_cmd - send commands
*/
void st7735_send_cmd(uint8_t cmd)
{
    st7735_set_cs(CS_ON);
    st7735_set_dc(DC_COMMAND);
    HAL_SPI_Transmit(spiHandler, (uint8_t *)&cmd, 1, 100);
    st7735_set_cs(CS_OFF);
}

/*
    st7735_send_data - send datas(8-bit)
*/
void st7735_send_data(uint8_t data)
{
    st7735_set_cs(CS_ON);
    st7735_set_dc(DC_DATA);
    HAL_SPI_Transmit(spiHandler, (uint8_t *)&data, 1, 100);
    st7735_set_cs(CS_OFF);
}

/*
    st7735_set_window - set a display window
*/
void st7735_set_window(uint16_t rs, uint16_t re, uint16_t cs, uint16_t ce)
{
    st7735_send_cmd(CMD_CASET);
    st7735_send_data(LBYTE(cs));
    st7735_send_data(RBYTE(cs));
    st7735_send_data(LBYTE(ce));
    st7735_send_data(RBYTE(ce));
    st7735_send_cmd(CMD_RASET);
    st7735_send_data(LBYTE(rs));
    st7735_send_data(RBYTE(rs));
    st7735_send_data(LBYTE(re));
    st7735_send_data(RBYTE(re));
}

void st7735_draw_bitmap(uint16_t *bitMap)
{
    st7735_send_cmd(CMD_RAMWR);
    st7735_set_cs(CS_ON);
    st7735_set_dc(DC_DATA);
    HAL_SPI_Transmit_DMA(spiHandler, (uint8_t *)bitMap, SCREEN_WIDTH * SCREEN_HEIGHT);
}

void st7735_init(SPI_HandleTypeDef *hspi)
{
    spiHandler = hspi;
    
    // pull the reset line high and low
    st7735_set_reset(RESET_OFF);
    HAL_Delay(10);
    st7735_set_reset(RESET_ON);
    HAL_Delay(10);
    st7735_set_reset(RESET_OFF);
    HAL_Delay(10);

    // st7735_send_cmd(CMD_SWRESET);
    // HAL_Delay(120);
    // st7735_send_cmd(CMD_SLPOUT);
    // st7735_send_cmd(CMD_FRMCTR1);
    // st7735_send_data(0x01);
    // st7735_send_data(0x2c);
    // st7735_send_data(0x2d);
    // st7735_send_cmd(CMD_FRMCTR2);
    // st7735_send_data(0x01);
    // st7735_send_data(0x2c);
    // st7735_send_data(0x2d);
    // st7735_send_cmd(CMD_FRMCTR3);
    // st7735_send_data(0x01);
    // st7735_send_data(0x2c);
    // st7735_send_data(0x2d);
    // st7735_send_data(0x01);
    // st7735_send_data(0x2c);
    // st7735_send_data(0x2d);
    // st7735_send_cmd(CMD_INVCTR);
    // st7735_send_data(0x07);
    // st7735_send_cmd(CMD_PWCTR1);
    // st7735_send_data(0x2a);
    // st7735_send_data(0x02);
    // st7735_send_data(0x84);
    // st7735_send_cmd(CMD_PWCTR2);
    // st7735_send_data(0xc5);
    // st7735_send_cmd(CMD_PWCTR3);
    // st7735_send_data(0x0a);
    // st7735_send_data(0x00);
    // st7735_send_cmd(CMD_PWCTR4);
    // st7735_send_data(0x8a);
    // st7735_send_data(0x2a);
    // st7735_send_cmd(CMD_PWCTR5);
    // st7735_send_data(0x8a);
    // st7735_send_data(0xee);
    // st7735_send_cmd(CMD_VMCTR1);
    // st7735_send_data(0x0e);
    // st7735_send_cmd(CMD_DISPON);
    // st7735_send_data(0x0e);
    // st7735_send_cmd(CMD_COLMOD);
    // st7735_send_
    



    // software reset
    st7735_send_cmd(CMD_SWRESET);
    HAL_Delay(150);
    // out of sleep mode
    st7735_send_cmd(CMD_SLPOUT);
    HAL_Delay(255);
    // frame rate control 1
    st7735_send_cmd(CMD_FRMCTR1);
    st7735_send_data(0x01);
    st7735_send_data(0x2c);
    st7735_send_data(0x2d);
    // frame rate control 2
    st7735_send_cmd(CMD_FRMCTR2);
    st7735_send_data(0x01);
    st7735_send_data(0x2c);
    st7735_send_data(0x2d);
    // frame rate control 2
    st7735_send_cmd(CMD_FRMCTR3);
    st7735_send_data(0x01);
    st7735_send_data(0x2c);
    st7735_send_data(0x2d);
    st7735_send_data(0x01);
    st7735_send_data(0x2c);
    st7735_send_data(0x2d);
    // display inversion ctrl
    st7735_send_cmd(CMD_INVCTR);
    st7735_send_data(0x07);
    // power control 1
    st7735_send_cmd(CMD_PWCTR1);
    st7735_send_data(0xa2);
    st7735_send_data(0x02);
    st7735_send_data(0x84);
    // power control 2
    st7735_send_cmd(CMD_PWCTR2);
    st7735_send_data(0xc5);
    // power control 3
    st7735_send_cmd(CMD_PWCTR3);
    st7735_send_data(0x0a);
    st7735_send_data(0x00);
    // power control 4
    st7735_send_cmd(CMD_PWCTR4);
    st7735_send_data(0x8a);
    st7735_send_data(0x2a);
    // power control 5
    st7735_send_cmd(CMD_PWCTR5);
    st7735_send_data(0x8a);
    st7735_send_data(0xee);
    // vcom control
    st7735_send_cmd(CMD_VMCTR1);
    st7735_send_data(0x0e);
    // don't invert display
    st7735_send_cmd(CMD_INVON);
    // madctl
    st7735_send_cmd(CMD_MADCTL);
    st7735_send_data(0x18);
    // colmod
    st7735_send_cmd(CMD_COLMOD);
    st7735_send_data(0x55);
    // caset
    st7735_send_cmd(CMD_CASET);
    st7735_send_data(0x00);
    st7735_send_data(26);
    st7735_send_data(0x00);
    st7735_send_data(0x4f + 26);
    // raset
    st7735_send_cmd(CMD_RASET);
    st7735_send_data(0x00);
    st7735_send_data(0x01);
    st7735_send_data(0x00);
    st7735_send_data(0xa0);
    // gamma adjustments(positive polarity)
    st7735_send_cmd(CMD_GMCTRP1);
    st7735_send_data(0x02);
    st7735_send_data(0x1c);
    st7735_send_data(0x07);
    st7735_send_data(0x12);
    st7735_send_data(0x37);
    st7735_send_data(0x32);
    st7735_send_data(0x29);
    st7735_send_data(0x2d);
    st7735_send_data(0x29);
    st7735_send_data(0x25);
    st7735_send_data(0x2b);
    st7735_send_data(0x39);
    st7735_send_data(0x00);
    st7735_send_data(0x01);
    st7735_send_data(0x03);
    st7735_send_data(0x10);
    // gamma adjustments(positive polarity)
    st7735_send_cmd(CMD_GMCTRN1);
    st7735_send_data(0x03);
    st7735_send_data(0x1d);
    st7735_send_data(0x07);
    st7735_send_data(0x06);
    st7735_send_data(0x2e);
    st7735_send_data(0x2c);
    st7735_send_data(0x29);
    st7735_send_data(0x2d);
    st7735_send_data(0x2e);
    st7735_send_data(0x2e);
    st7735_send_data(0x37);
    st7735_send_data(0x3f);
    st7735_send_data(0x00);
    st7735_send_data(0x00);
    st7735_send_data(0x02);
    st7735_send_data(0x10);
    // normal display on
    st7735_send_cmd(CMD_NORON);
    HAL_Delay(10);
    st7735_send_cmd(CMD_DISPON);
    HAL_Delay(100);
}