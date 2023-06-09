#include "stdint.h"
#include "../MCAL.h"
#include "GPIO_core.h"
#include "GPIO_cfg.h"
#include "../../Bit_maths.h"
#include "util/delay.h"

//void(*GPIO_Interrupt)(void);

void GPIO_Init(void)
{
	DDRA  =  (GPIO_PORTA_PIN0_DIR << GPIO_PORTA_PIN_0)
	       | (GPIO_PORTA_PIN1_DIR << GPIO_PORTA_PIN_1)
	       | (GPIO_PORTA_PIN2_DIR << GPIO_PORTA_PIN_2)
	       | (GPIO_PORTA_PIN3_DIR << GPIO_PORTA_PIN_3)
	       | (GPIO_PORTA_PIN4_DIR << GPIO_PORTA_PIN_4)
	       | (GPIO_PORTA_PIN5_DIR << GPIO_PORTA_PIN_5)
	       | (GPIO_PORTA_PIN6_DIR << GPIO_PORTA_PIN_6)
	       | (GPIO_PORTA_PIN7_DIR << GPIO_PORTA_PIN_7);

	DDRB |=  (GPIO_PORTB_PIN0_DIR << GPIO_PORTB_PIN_0)
	       | (GPIO_PORTB_PIN1_DIR << GPIO_PORTB_PIN_1)
	       | (GPIO_PORTB_PIN2_DIR << GPIO_PORTB_PIN_2)
	       | (GPIO_PORTB_PIN3_DIR << GPIO_PORTB_PIN_3)
	       | (GPIO_PORTB_PIN4_DIR << GPIO_PORTB_PIN_4)
	       | (GPIO_PORTB_PIN5_DIR << GPIO_PORTB_PIN_5)
	       | (GPIO_PORTB_PIN6_DIR << GPIO_PORTB_PIN_6)
	       | (GPIO_PORTB_PIN7_DIR << GPIO_PORTB_PIN_7);

	DDRC |=  (GPIO_PORTC_PIN0_DIR << GPIO_PORTC_PIN_0)
	       | (GPIO_PORTC_PIN1_DIR << GPIO_PORTC_PIN_1)
	       | (GPIO_PORTC_PIN2_DIR << GPIO_PORTC_PIN_2)
	       | (GPIO_PORTC_PIN3_DIR << GPIO_PORTC_PIN_3)
	       | (GPIO_PORTC_PIN4_DIR << GPIO_PORTC_PIN_4)
	       | (GPIO_PORTC_PIN5_DIR << GPIO_PORTC_PIN_5)
	       | (GPIO_PORTC_PIN6_DIR << GPIO_PORTC_PIN_6)
	       | (GPIO_PORTC_PIN7_DIR << GPIO_PORTC_PIN_7);

	DDRD |=  (GPIO_PORTD_PIN0_DIR << GPIO_PORTD_PIN_0)
	       | (GPIO_PORTD_PIN1_DIR << GPIO_PORTD_PIN_1)
	       | (GPIO_PORTD_PIN2_DIR << GPIO_PORTD_PIN_2)
	       | (GPIO_PORTD_PIN3_DIR << GPIO_PORTD_PIN_3)
	       | (GPIO_PORTD_PIN4_DIR << GPIO_PORTD_PIN_4)
	       | (GPIO_PORTD_PIN5_DIR << GPIO_PORTD_PIN_5)
	       | (GPIO_PORTD_PIN6_DIR << GPIO_PORTD_PIN_6)
	       | (GPIO_PORTD_PIN7_DIR << GPIO_PORTD_PIN_7);


	PORTA |= (GPIO_PORTA_PIN0_STATE << GPIO_PORTA_PIN_0)
	       | (GPIO_PORTA_PIN1_STATE << GPIO_PORTA_PIN_1)
	       | (GPIO_PORTA_PIN2_STATE << GPIO_PORTA_PIN_2)
	       | (GPIO_PORTA_PIN3_STATE << GPIO_PORTA_PIN_3)
	       | (GPIO_PORTA_PIN4_STATE << GPIO_PORTA_PIN_4)
	       | (GPIO_PORTA_PIN5_STATE << GPIO_PORTA_PIN_5)
	       | (GPIO_PORTA_PIN6_STATE << GPIO_PORTA_PIN_6)
	       | (GPIO_PORTA_PIN7_STATE << GPIO_PORTA_PIN_7);

	PORTB |= (GPIO_PORTB_PIN0_STATE << GPIO_PORTB_PIN_0)
	       | (GPIO_PORTB_PIN1_STATE << GPIO_PORTB_PIN_1)
	       | (GPIO_PORTB_PIN2_STATE << GPIO_PORTB_PIN_2)
	       | (GPIO_PORTB_PIN3_STATE << GPIO_PORTB_PIN_3)
	       | (GPIO_PORTB_PIN4_STATE << GPIO_PORTB_PIN_4)
	       | (GPIO_PORTB_PIN5_STATE << GPIO_PORTB_PIN_5)
	       | (GPIO_PORTB_PIN6_STATE << GPIO_PORTB_PIN_6)
	       | (GPIO_PORTB_PIN7_STATE << GPIO_PORTB_PIN_7);

	PORTC |= (GPIO_PORTC_PIN0_STATE << GPIO_PORTC_PIN_0)
	       | (GPIO_PORTC_PIN1_STATE << GPIO_PORTC_PIN_1)
	       | (GPIO_PORTC_PIN2_STATE << GPIO_PORTC_PIN_2)
	       | (GPIO_PORTC_PIN3_STATE << GPIO_PORTC_PIN_3)
	       | (GPIO_PORTC_PIN4_STATE << GPIO_PORTC_PIN_4)
	       | (GPIO_PORTC_PIN5_STATE << GPIO_PORTC_PIN_5)
	       | (GPIO_PORTC_PIN6_STATE << GPIO_PORTC_PIN_6)
	       | (GPIO_PORTC_PIN7_STATE << GPIO_PORTC_PIN_7);

	PORTD |= (GPIO_PORTD_PIN0_STATE << GPIO_PORTD_PIN_0)
	       | (GPIO_PORTD_PIN1_STATE << GPIO_PORTD_PIN_1)
	       | (GPIO_PORTD_PIN2_STATE << GPIO_PORTD_PIN_2)
	       | (GPIO_PORTD_PIN3_STATE << GPIO_PORTD_PIN_3)
	       | (GPIO_PORTD_PIN4_STATE << GPIO_PORTD_PIN_4)
	       | (GPIO_PORTD_PIN5_STATE << GPIO_PORTD_PIN_5)
	       | (GPIO_PORTD_PIN6_STATE << GPIO_PORTD_PIN_6)
	       | (GPIO_PORTD_PIN7_STATE << GPIO_PORTD_PIN_7);

}

void GPIO_Main(void)
{
	GPIO_PinTgl(PORTA, GPIO_PORTA_PIN_0);
}

void GPIO_PortDirSet(uint8_t port , uint8_t value)
{
	SET_BYTE(port,value);
}

void GPIO_PinSet(uint8_t port , uint8_t pin)
{
	SET_BIT(port , pin);
}

void GPIO_PinClr(uint8_t port , uint8_t pin)
{
	CLR_BIT(port , pin);
}

void GPIO_PinTgl(uint8_t port , uint8_t pin)
{
	TOGGLE_BIT(port , pin);
}

//void GPIO_InterruptHandler(void * pf)
//{
//	if (pf != NULL)
//		GPIO_Interrupt = pf;
//}
//
//
//
//void __vector_2(void) __attribute__((signal , used));
//void __vector_2(void)
//{
//
//	GPIO_Interrupt();
//	CLR_BIT(GIFR , 6);
//}

