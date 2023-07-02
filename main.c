/*


 * main.c
 *
 *  Created on: Jun 2, 2023
 *      Author: user
 */
#include "MCAL/GPIO/GPIO_core.h"
#include "GIE_core.h"
#include "Bit_maths.h"
#include "MCAL/TIMER/TMR_core.h"
#include "SCHD_core.h"
#include "util/delay.h"
#include "MCAL/ADC/ADC_core.h"
#include "MCAL/UART/UART_core.h"
void ADC_Function(void);

int main(void)
{
	GPIO_Init();
	GIE_Enable();
	TMR0_Init();
	ADC_Init();
	TMR0_InterruptHandler(SCHD_Main);
	PWM_Init();
//	ADC_InterruptHandler(ADC_Function);
	UART_Init();
	while(1)
	{


//		UART_TransmitData(100);

	}
	return 0;
}

void ADC_Function(void)
{
	uint8_t ADC_Reading;
	ADC_Reading = (uint8_t)ADC_ReadRawValue(0);
	if (ADC_Reading > 10)
	{
		PORTB = 0xff;
	}
}
