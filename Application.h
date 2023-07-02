/*
 * Application.h
 *
 *  Created on: Jul 2, 2023
 *      Author: user
 */

#ifndef APPLICATION_H_
#define APPLICATION_H_
#include "Bit_maths.h"
#include "stdint.h"

typedef struct
{
	uint8_t Enable    : 1;
	uint8_t Direction : 1;
	uint8_t Speed 	  : 6;
}Motor_ConfigurationParameters_s;

void App_1 (void);
#endif /* APPLICATION_H_ */
