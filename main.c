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
int main(void)
{
	GIE_Enable();
	GPIO_Init();
	TMR0_Init();
	TMR0_InterruptHandler(SCHD_Task1sec);
	while(1)
	{



	}
	return 0;
}
