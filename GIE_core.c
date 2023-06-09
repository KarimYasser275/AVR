/*
 * GIE_core.c
 *
 *  Created on: Jun 9, 2023
 *      Author: user
 */
#include "stdint.h"
#include "GIE_core.h"
#include "Bit_maths.h"

void GIE_Enable(void)
{
	SET_BIT(SREG, 7);
}

void GIE_Disable(void)
{
	CLR_BIT(SREG, 7);
}
