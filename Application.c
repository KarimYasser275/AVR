/*
 * Application.c
 *
 *  Created on: Jul 2, 2023
 *      Author: user
 */
#include "MCAL/ADC/ADC_core.h"
#include "MCAL/UART/UART_core.h"
#include "MCAL/PWM/PWM_core.h"
#include "MCAL/MCAL.h"
#include "Bit_maths.h"
#include "Application.h"
#include "util/delay.h"
extern uint8_t UART_RawValue;

Motor_ConfigurationParameters_s Motor_parameters = {1,0,250} ;

void App_1 (void)
{
	TOGGLE_BIT(PORTB,7);

	Motor_parameters.Enable = GET_BIT(UART_RawValue ,0);
	Motor_parameters.Direction = GET_BIT(UART_RawValue ,1);
	Motor_parameters.Speed = UART_RawValue && 0b00111111;


	if (Motor_parameters.Enable)
	{
		TOGGLE_BIT(PORTB,6);
		if (Motor_parameters.Direction = 1)
		{
			TOGGLE_BIT(PORTB,4);
			/*rotate clockwise*/
			PORTC = 0x0;
//			_delay_ms (10);
			PORTC = 0b11000000;

		}
		else if (Motor_parameters.Direction = 0)
		{
			TOGGLE_BIT(PORTB,1);
			PORTC = 0x0;
			PORTC = 0b00000011;
		}
	}
	UART_TransmitData(UART_RawValue);
}
