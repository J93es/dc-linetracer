/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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
#include "stm32f4xx_ll_adc.h"
#include "stm32f4xx_ll_i2c.h"
#include "stm32f4xx_ll_rcc.h"
#include "stm32f4xx_ll_bus.h"
#include "stm32f4xx_ll_system.h"
#include "stm32f4xx_ll_exti.h"
#include "stm32f4xx_ll_cortex.h"
#include "stm32f4xx_ll_utils.h"
#include "stm32f4xx_ll_pwr.h"
#include "stm32f4xx_ll_dma.h"
#include "stm32f4xx_ll_spi.h"
#include "stm32f4xx_ll_tim.h"
#include "stm32f4xx_ll_usart.h"
#include "stm32f4xx_ll_gpio.h"

#if defined(USE_FULL_ASSERT)
#include "stm32_assert.h"
#endif /* USE_FULL_ASSERT */

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

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define B1_Pin LL_GPIO_PIN_13
#define B1_GPIO_Port GPIOC
#define Sensor_Mux0_Pin LL_GPIO_PIN_0
#define Sensor_Mux0_GPIO_Port GPIOC
#define Sensor_Mux1_Pin LL_GPIO_PIN_1
#define Sensor_Mux1_GPIO_Port GPIOC
#define Sensor_Mux2_Pin LL_GPIO_PIN_2
#define Sensor_Mux2_GPIO_Port GPIOC
#define Sensor_MuxX_Pin LL_GPIO_PIN_3
#define Sensor_MuxX_GPIO_Port GPIOC
#define USART_TX_Pin LL_GPIO_PIN_2
#define USART_TX_GPIO_Port GPIOA
#define USART_RX_Pin LL_GPIO_PIN_3
#define USART_RX_GPIO_Port GPIOA
#define OLED_DC_Pin LL_GPIO_PIN_4
#define OLED_DC_GPIO_Port GPIOA
#define LD2_Pin LL_GPIO_PIN_5
#define LD2_GPIO_Port GPIOA
#define ADC_Sensor1_Pin LL_GPIO_PIN_6
#define ADC_Sensor1_GPIO_Port GPIOA
#define ADC_Sensor2_Pin LL_GPIO_PIN_7
#define ADC_Sensor2_GPIO_Port GPIOA
#define MotorR_1_Pin LL_GPIO_PIN_4
#define MotorR_1_GPIO_Port GPIOC
#define MotorR_2_Pin LL_GPIO_PIN_5
#define MotorR_2_GPIO_Port GPIOC
#define ADC_Battery_Pin LL_GPIO_PIN_0
#define ADC_Battery_GPIO_Port GPIOB
#define OLED_CS_Pin LL_GPIO_PIN_2
#define OLED_CS_GPIO_Port GPIOB
#define MotorR_Encoder1_Pin LL_GPIO_PIN_6
#define MotorR_Encoder1_GPIO_Port GPIOC
#define MotorR_Encoder2_Pin LL_GPIO_PIN_7
#define MotorR_Encoder2_GPIO_Port GPIOC
#define TMS_Pin LL_GPIO_PIN_13
#define TMS_GPIO_Port GPIOA
#define TCK_Pin LL_GPIO_PIN_14
#define TCK_GPIO_Port GPIOA
#define SW_1_Pin LL_GPIO_PIN_10
#define SW_1_GPIO_Port GPIOC
#define SW_2_Pin LL_GPIO_PIN_11
#define SW_2_GPIO_Port GPIOC
#define SW_3_Pin LL_GPIO_PIN_12
#define SW_3_GPIO_Port GPIOC
#define SWO_Pin LL_GPIO_PIN_3
#define SWO_GPIO_Port GPIOB
#define MotorL_1_Pin LL_GPIO_PIN_4
#define MotorL_1_GPIO_Port GPIOB
#define MotorL_2_Pin LL_GPIO_PIN_5
#define MotorL_2_GPIO_Port GPIOB
#define MotorL_Encoder1_Pin LL_GPIO_PIN_6
#define MotorL_Encoder1_GPIO_Port GPIOB
#define MotorL_Encoder2_Pin LL_GPIO_PIN_7
#define MotorL_Encoder2_GPIO_Port GPIOB
#define MotorL_PWM_Pin LL_GPIO_PIN_8
#define MotorL_PWM_GPIO_Port GPIOB
#define MotorR_PWM_Pin LL_GPIO_PIN_9
#define MotorR_PWM_GPIO_Port GPIOB
#ifndef NVIC_PRIORITYGROUP_0
#define NVIC_PRIORITYGROUP_0         ((uint32_t)0x00000007) /*!< 0 bit  for pre-emption priority,
                                                                 4 bits for subpriority */
#define NVIC_PRIORITYGROUP_1         ((uint32_t)0x00000006) /*!< 1 bit  for pre-emption priority,
                                                                 3 bits for subpriority */
#define NVIC_PRIORITYGROUP_2         ((uint32_t)0x00000005) /*!< 2 bits for pre-emption priority,
                                                                 2 bits for subpriority */
#define NVIC_PRIORITYGROUP_3         ((uint32_t)0x00000004) /*!< 3 bits for pre-emption priority,
                                                                 1 bit  for subpriority */
#define NVIC_PRIORITYGROUP_4         ((uint32_t)0x00000003) /*!< 4 bits for pre-emption priority,
                                                                 0 bit  for subpriority */
#endif

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
