/*
 * ADC_core.h
 *
 *  Created on: Jun 23, 2023
 *      Author: user
 */

#ifndef MCAL_ADC_ADC_CORE_H_
#define MCAL_ADC_ADC_CORE_H_
#include "stdint.h"

enum ACSR_bits
{
	ACIS0_BIT = 0,
	ACIS1_BIT,
	ACIC_BIT,
	ACIE_BIT,
	ACI_BIT,
	ACO_BIT,
	ACBG_BIT,
	ACD_BIT
}ACSR_bits_e;
enum ADMUX_bits
{
	MUX0_BIT = 0,
	MUX1_BIT,
	MUX2_BIT,
	MUX3_BIT,
	MUX4_BIT,
	ADLAR_BIT,
	REFS0_BIT,
	REFS1_BIT,
}ADMUX_bits_e;

enum ADCSRA_bits_t
{
	ADPS0_BIT = 0,
	ADPS1_BIT,
	ADPS2_BIT,
	ADIE_BIT,
	ADIF_BIT,
	ADATE_BIT,
	ADSC_BIT,
	ADEN_BIT
}ADCSRA_bits_e;

#define ADTS2_BIT  7
#define ADTS1_BIT  6
#define ADTS0_BIT  5

#define ADC_ACTIVE 		1
#define ADC_NOT_ACTIVE  0

void ADC_Init(void);
uint16_t ADC_ReadRawValue(uint8_t channel);
void  ADC_StartConversion(void);
void ADC_InterruptHandler(void* pf);
#endif /* MCAL_ADC_ADC_CORE_H_ */
