/*
 * PWM_core.h
 *
 *  Created on: Jun 28, 2023
 *      Author: user
 */

#ifndef MCAL_PWM_PWM_CORE_H_
#define MCAL_PWM_PWM_CORE_H_

void PWM_Init(void);
void PWM_Main(void);
void PWM_SetDutyCycle (uint8_t duty_cycle);
#endif /* MCAL_PWM_PWM_CORE_H_ */
