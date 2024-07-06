/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */
#define RBYTE(n)       (((n) >> 0) & 0x00ff)        
#define LBYTE(n)       (((n) >> 8) & 0x00ff)        
/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define DS3231_NINT_Pin GPIO_PIN_14
#define DS3231_NINT_GPIO_Port GPIOC
#define MCU_PWR_ON_Pin GPIO_PIN_1
#define MCU_PWR_ON_GPIO_Port GPIOA
#define LIS_INTR_Pin GPIO_PIN_2
#define LIS_INTR_GPIO_Port GPIOA
#define ST7735_RS_Pin GPIO_PIN_0
#define ST7735_RS_GPIO_Port GPIOB
#define ST7735_RESET_Pin GPIO_PIN_1
#define ST7735_RESET_GPIO_Port GPIOB
#define ST7735_CS_Pin GPIO_PIN_2
#define ST7735_CS_GPIO_Port GPIOB
#define ST7735_BL_Pin GPIO_PIN_10
#define ST7735_BL_GPIO_Port GPIOB
#define SET_BTN_Pin GPIO_PIN_12
#define SET_BTN_GPIO_Port GPIOB
#define UP_BTN_Pin GPIO_PIN_13
#define UP_BTN_GPIO_Port GPIOB
#define UP_BTN_EXTI_IRQn EXTI15_10_IRQn
#define MCU_PWR_OFF_Pin GPIO_PIN_15
#define MCU_PWR_OFF_GPIO_Port GPIOB
#define I2C1_SCL_Pin GPIO_PIN_6
#define I2C1_SCL_GPIO_Port GPIOB
#define I2C1_SDA_Pin GPIO_PIN_7
#define I2C1_SDA_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
