/*
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 Karl Yamashita
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
 */

/*
 * GPIO_Handler.c
 *
 *  Created on: Jul 30, 2025
 *      Author: karl.yamashita
 */


#include "main.h"

//
void LED_CAN1_RX_Toggle(void)
{
	HAL_GPIO_TogglePin(LED_RX1_GPIO_Port, LED_RX1_Pin);
}

//
void LED_CAN1_TX_Toggle(void)
{
	HAL_GPIO_TogglePin(LED_TX1_GPIO_Port, LED_TX1_Pin);
}

void LED_CAN2_RX_Toggle(void)
{
	HAL_GPIO_TogglePin(LED_RX2_GPIO_Port, LED_RX2_Pin);
}

//
void LED_CAN2_TX_Toggle(void)
{
	HAL_GPIO_TogglePin(LED_TX2_GPIO_Port, LED_TX2_Pin);
}

void LED_Status_Toggle(void)
{
	HAL_GPIO_TogglePin(LED_STATUS_GPIO_Port, LED_STATUS_Pin);
}

void LED_CAN1_RX(bool state)
{
	if(state)
	{
		HAL_GPIO_WritePin(LED_RX1_GPIO_Port, LED_RX1_Pin, GPIO_PIN_RESET); // On
	}
	else
	{
		HAL_GPIO_WritePin(LED_RX1_GPIO_Port, LED_RX1_Pin, GPIO_PIN_SET); // Off
	}
}

void LED_CAN1_TX(bool state)
{
	if(state)
	{
		HAL_GPIO_WritePin(LED_TX1_GPIO_Port, LED_TX1_Pin, GPIO_PIN_RESET); // On
	}
	else
	{
		HAL_GPIO_WritePin(LED_TX1_GPIO_Port, LED_TX1_Pin, GPIO_PIN_SET); // Off
	}
}

void LED_CAN2_RX(bool state)
{
	if(state)
	{
		HAL_GPIO_WritePin(LED_RX2_GPIO_Port, LED_RX2_Pin, GPIO_PIN_RESET); // On
	}
	else
	{
		HAL_GPIO_WritePin(LED_RX2_GPIO_Port, LED_RX2_Pin, GPIO_PIN_SET); // Off
	}
}

void LED_CAN2_TX(bool state)
{
	if(state)
	{
		HAL_GPIO_WritePin(LED_TX2_GPIO_Port, LED_TX2_Pin, GPIO_PIN_RESET); // On
	}
	else
	{
		HAL_GPIO_WritePin(LED_TX2_GPIO_Port, LED_TX2_Pin, GPIO_PIN_SET); // Off
	}
}

void LED_Status(bool state)
{
	if(state)
	{
		HAL_GPIO_WritePin(LED_STATUS_GPIO_Port, LED_STATUS_Pin, GPIO_PIN_RESET); // On
	}
	else
	{
		HAL_GPIO_WritePin(LED_STATUS_GPIO_Port, LED_STATUS_Pin, GPIO_PIN_SET); // Off
	}
}





