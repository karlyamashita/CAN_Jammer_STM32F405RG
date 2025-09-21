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
 * GPIO_Handler.h
 *
 *  Created on: Jul 30, 2025
 *      Author: karl.yamashita
 */

#ifndef INC_GPIO_HANDLER_H_
#define INC_GPIO_HANDLER_H_


void LED_CAN1_RX_Toggle(void);
void LED_CAN1_TX_Toggle(void);
void LED_CAN2_RX_Toggle(void);
void LED_CAN2_TX_Toggle(void);

void LED_Status_Toggle(void);

void LED_CAN1_RX(bool state);
void LED_CAN1_TX(bool state);
void LED_CAN2_RX(bool state);
void LED_CAN2_TX(bool state);

void LED_Status(bool state);


#endif /* INC_GPIO_HANDLER_H_ */
