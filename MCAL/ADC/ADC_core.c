/*
 * ADC_core.c
 *
 *  Created on: Jun 23, 2023
 *      Author: user
 */
#include "stdint.h"
#include "ADC_core.h"
#include "ADC_cfg.h"
#include "../MCAL.h"
#include "ADC_core.h"
#include "../../Bit_maths.h"


void (*ADC_ISR)(void);

void ADC_Init(void)
{
	/* Initialize pin4 in portA as Analog Input
	 * reference 5v
	 * Left Adjustment is */
	ACSR |=    (0 << ACD_BIT) ;

	ADMUX |=   (0 << MUX0_BIT)
			 | (0 << MUX1_BIT)
			 | (0 << MUX2_BIT)
			 | (0 << MUX3_BIT)
			 | (0 << MUX4_BIT)
			 | (1 << ADLAR_BIT)
			 | (0 << REFS0_BIT)
			 | (0 << REFS1_BIT);

	ADCSRA |=  (1 << ADPS0_BIT )
		     | (1 << ADPS1_BIT)
		     | (1 << ADPS2_BIT)
		     | (1 << ADIE_BIT)
		     | (1 << ADIF_BIT)
		     | (1 << ADATE_BIT)
		     | (1 << ADSC_BIT)
		     | (1 << ADEN_BIT);

	ADCH = 0;
	ADCL = 0;

	CLR_BIT(SFIOR, 7);
	SET_BIT(SFIOR, 6);
	SET_BIT(SFIOR, 6);

}

uint16_t ADC_ReadRawValue(uint8_t channel)
{
//	uint16_t retval;
//#if (LEFT_ADJUSTMENT == ADC_NOT_ACTIVE)
//	retval = (ADCH << 8 ) | (ADCL);
//#else
//	retval = ADCH;
//#endif
//	return retval;


	uint16_t mv_result = 0 ;
//	ADC_StartConversion();
	// polling
//	SET_BIT(PORTB , 1);
	while(GET_BIT(ADCSRA , ADIF_BIT) == 0);
	// clear the flag
//	SET_BIT(PORTB , 7);
	SET_BIT(ADCSRA , ADIF_BIT );

	/*  ( if / else if ) condition for Macros */
#if (LEFT_ADJUSTMENT == ADC_NOT_ACTIVE)
	mv_result = ((ADCH) * (5000UL) )/(256));
	//mv_result  *= 1000;


	//mv_result = (((ADCH) * (5000UL) )/(256));

	#elif (LEFT_ADJUSTMENT == ADC_ACTIVE)
	mv_result =  (uint16_t)(ADCH);

	#endif

	return mv_result;

}

void  ADC_StartConversion(void)
{
	ADCSRA |= (1 << ADSC_BIT);
}

void ADC_InterruptHandler(void* pf)
		{
			if(pf != NULL)
			{
				ADC_ISR = pf;
			}
			else
			{
				/*do nothing*/
			}
		}
void __vector_16 (void)		__attribute__((signal));
void __vector_16 (void)
{

}
