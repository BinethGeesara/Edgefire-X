/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
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
#include "stm32f1xx_hal.h"

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
#define Button1_EXTI_Pin GPIO_PIN_3
#define Button1_EXTI_GPIO_Port GPIOA
#define Button1_EXTI_EXTI_IRQn EXTI3_IRQn
#define Button2_EXTI_Pin GPIO_PIN_4
#define Button2_EXTI_GPIO_Port GPIOA
#define Button2_EXTI_EXTI_IRQn EXTI4_IRQn
#define Button3_EXTI_Pin GPIO_PIN_5
#define Button3_EXTI_GPIO_Port GPIOA
#define Button3_EXTI_EXTI_IRQn EXTI9_5_IRQn
#define SW_3PDT_EXTI_Pin GPIO_PIN_7
#define SW_3PDT_EXTI_GPIO_Port GPIOA
#define SW_3PDT_EXTI_EXTI_IRQn EXTI9_5_IRQn
#define GP_UD_Pin GPIO_PIN_1
#define GP_UD_GPIO_Port GPIOB
#define TP_UD_Pin GPIO_PIN_10
#define TP_UD_GPIO_Port GPIOB
#define LP_UD_Pin GPIO_PIN_11
#define LP_UD_GPIO_Port GPIOB
#define LP_INC_Pin GPIO_PIN_12
#define LP_INC_GPIO_Port GPIOB
#define TP_INC_Pin GPIO_PIN_13
#define TP_INC_GPIO_Port GPIOB
#define GP_INC_Pin GPIO_PIN_14
#define GP_INC_GPIO_Port GPIOB
#define CS_ALL_Pin GPIO_PIN_15
#define CS_ALL_GPIO_Port GPIOB
#define GAIN_EXTI_Pin GPIO_PIN_10
#define GAIN_EXTI_GPIO_Port GPIOA
#define GAIN_EXTI_EXTI_IRQn EXTI15_10_IRQn
#define TONE_EXTI_Pin GPIO_PIN_11
#define TONE_EXTI_GPIO_Port GPIOA
#define TONE_EXTI_EXTI_IRQn EXTI15_10_IRQn
#define LEVEL_EXTI_Pin GPIO_PIN_12
#define LEVEL_EXTI_GPIO_Port GPIOA
#define LEVEL_EXTI_EXTI_IRQn EXTI15_10_IRQn

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
