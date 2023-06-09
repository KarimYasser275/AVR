/*
 * Bit_maths.h
 *
 *  Created on: Jun 2, 2023
 *      Author: user
 */

#ifndef BIT_MATHS_H_
#define BIT_MATHS_H_

/************************************************/
/******** Author      : Ahmed Atia Atia *********/
/******** Date        : 15/3/2019       *********/
/******** version     : 1.0 V           *********/
/******** Description : Bit_Math lib    *********/
/************************************************/


/************************************************/
/* guard of file will call one time in .c      **/
/************************************************/


#ifndef _BIT_MATH_H_
#define _BIT_MATH_H_

#define SET_BIT(Reg, bitnum)       	(Reg |=1<<bitnum)
#define CLR_BIT(Reg, bitnum)     	(Reg &=~(1<<bitnum))
#define TOGGLE_BIT(Reg, bitnum)    	(Reg ^=(1<<bitnum))
#define GET_BIT(Reg, bitnum)       	((Reg>>bitnum)& 0x01)

#define SET_BYTE(Reg,value)         ( Reg = value )

#define CONC_BIT(b7,b6,b5,b4,b3,b2,b1,b0) Conc_help(b7,b6,b5,b4,b3,b2,b1,b0)
#define Conc_help(b7,b6,b5,b4,b3,b2,b1,b0) 0b##b7##b6##b5##b4##b3##b2##b1##b0

#endif /* End Gaurd */


#endif /* BIT_MATHS_H_ */
