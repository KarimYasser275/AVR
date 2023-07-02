/*
 * PWM_core.c
 *
 *  Created on: Jun 28, 2023
 *      Author: user
 */
#include "stdint.h"
#include "../MCAL.h"
#include "PWM_core.h"
#include "PWM_cfg.h"
#include "../TIMER/TMR_core.h"
#include "../ADC/ADC_core.h"
#include "../../Bit_maths.h"

void PWM_Init(void)
{
	TMR2_Init();
}

void PWM_Main(void)
{
	TOGGLE_BIT(PORTB,7);
	uint8_t duty_cycle = (uint8_t) ADC_ReadRawValue(0);
	OCR2 = duty_cycle;
}

void PWM_SetDutyCycle (uint8_t duty_cycle)
{
	OCR2 = duty_cycle;
}
