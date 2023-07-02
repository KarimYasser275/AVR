/*
 * UART_core.c
 *
 *  Created on: Jun 30, 2023
 *      Author: user
 */

#include "stdint.h"
#include "../MCAL.h"
#include "UART_core.h"
#include "../../Bit_maths.h"

uint8_t UART_RawValue = 0;
void UART_Init(void)
{
	/*Enable Transmit/Receive*/
	UCSRB |= ( 1 << RXEN_BIT)
			|( 1 << TXEN_BIT)
			|( 0 << UCSZ2_BIT)
			|( 1 << RXCIE_BIT);

	UCSRC = 0b01110101;

	/*Baud Rate 9600*/
	UBRRL = 51;
	UBBRH = 0;
}

uint8_t UART_ReceiveData (void)
{
	 uint8_t Result;
	  // Wait until Reception Complete
	  while((UCSRA&0x80) == 0x00);
	  Result = UDR;

	  /* Clear Flag */
	  SET_BIT(UCSRA,7);
	  return Result;
}

void UART_TransmitData (uint8_t data)
{
	// Wait until transmission Register Empty
	while((UCSRA&0x20) == 0x00);
	UDR = data;
}


void __vector_13(void) __attribute__((signal , used));
void __vector_13(void)
{

	UART_RawValue = UDR;

}
