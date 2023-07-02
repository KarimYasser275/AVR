/*
 * MCAL.h
 *
 *  Created on: Jun 9, 2023
 *      Author: user
 */

#ifndef MCAL_MCAL_H_
#define MCAL_MCAL_H_

#define NULL    0U
#define STD_ON  1U
#define STD_OFF 0U
// General Purpose I/O Registers
#define PORTA  (*(volatile uint8_t *)(0x003B)) // Port A Data Register
#define DDRA   (*(volatile uint8_t *)(0x003A)) // Port A Data Direction Register
#define PINA   (*(volatile uint8_t *)(0x0039)) // Port A Input Pins Register

#define PORTB  (*(volatile uint8_t *)(0x0038)) // Port B Data Register
#define DDRB   (*(volatile uint8_t *)(0x0037)) // Port B Data Direction Register
#define PINB   (*(volatile uint8_t *)(0x0036)) // Port B Input Pins Register

#define PORTC  (*(volatile uint8_t *)(0x0035)) // Port C Data Register
#define DDRC   (*(volatile uint8_t *)(0x0034)) // Port C Data Direction Register
#define PINC   (*(volatile uint8_t *)(0x0033)) // Port C Input Pins Register

#define PORTD  (*(volatile uint8_t *)(0x0032)) // Port D Data Register
#define DDRD   (*(volatile uint8_t *)(0x0031)) // Port D Data Direction Register
#define PIND   (*(volatile uint8_t *)(0x0030)) // Port D Input Pins Register

// Timer/Counter Registers
#define TCCR0  (*(volatile uint8_t *)(0x0043)) // Timer/Counter 0 Control Register
#define TCNT0  (*(volatile uint8_t *)(0x0042)) // Timer/Counter 0 Value Register
#define OCR0   (*(volatile uint8_t *)(0x005C)) // Timer/Counter 0 Output Compare Register

#define TCCR2  (*(volatile uint8_t *)(0x0045)) // Timer/Counter 2 Control Register
#define TCNT2  (*(volatile uint8_t *)(0x0044)) // Timer/Counter 2 Value Register
#define OCR2   (*(volatile uint8_t *)(0x0043)) // Timer/Counter 2 Output Compare Register
#define ASSR   (*(volatile uint8_t *)(0x0042)) /* Asynchronous Status Register */

#define TIMSK   (*(volatile uint8_t *)(0x0059)) //Timer Interrupt mask register
#define TIFR    (*(volatile uint8_t *)(0x0058)) //Timer Interrupt flag register

#define TCCR1A (*(volatile uint8_t *)(0x0049)) // Timer/Counter 1 Control Register A
#define TCCR1B (*(volatile uint8_t *)(0x0048)) // Timer/Counter 1 Control Register B
#define TCNT1H (*(volatile uint8_t *)(0x004D)) // Timer/Counter 1 High Byte Value Register
#define TCNT1L (*(volatile uint8_t *)(0x004C)) // Timer/Counter 1 Low Byte Value Register
#define OCR1AH (*(volatile uint8_t *)(0x004B)) // Timer/Counter 1 High Byte Output Compare Register A
#define OCR1AL (*(volatile uint8_t *)(0x004A)) // Timer/Counter 1 Low Byte Output Compare Register A
#define OCR1BH (*(volatile uint8_t *)(0x0049)) // Timer/Counter 1 High Byte Output Compare Register B
#define OCR1BL (*(volatile uint8_t *)(0x0048)) // Timer/Counter 1 Low Byte Output Compare Register B
#define ICR1H  (*(volatile uint8_t *)(0x004F)) // Timer/Counter 1 Input Capture Register High Byte
#define ICR1L  (*(volatile uint8_t *)(0x004E)) // Timer/Counter 1 Input Capture Register Low Byte

// USART Registers
#define UDR    (*(volatile uint8_t *)(0x002C)) // USART I/O Data Register
#define UCSRA  (*(volatile uint8_t *)(0x002B)) // USART Control and Status Register A
#define UCSRB  (*(volatile uint8_t *)(0x002A)) // USART Control and Status Register B
#define UCSRC  (*(volatile uint8_t *)(0x0040)) // USART Control and Status Register C
#define UBRRL  (*(volatile uint8_t *)(0x0029)) // USART Baud Rate Register Low
#define UBBRH  (*(volatile uint8_t *)(0x0040)) // USART Baud Rate Register HIGH

// Interrupt Registers
#define SREG   (*(volatile uint8_t *)(0x005F)) // Status Register
#define GICR   (*(volatile uint8_t *)(0x005B)) // General Interrupt Control Register
#define GIFR   (*(volatile uint8_t *)(0x005A)) // General Interrupt Flag Register
#define MCUCR  (*(volatile uint8_t *)(0x0055)) // MCU Control Register
#define MCUCSR (*(volatile uint8_t *)(0x0054)) // MCU Control and Status Register

// ADC Registers
#define ACSR   (*(volatile uint8_t *)(0x0028)) // Analog Comparator Control and Status Register
#define ADCSRA (*(volatile uint8_t *)(0x0026)) // ADC Control and Status Register A
#define ADMUX  (*(volatile uint8_t *)(0x0027)) // ADC Multiplexer Selection Register
#define ADCH   (*(volatile uint8_t *)(0x0025)) // ADC Data Register High
#define ADCL   (*(volatile uint8_t *)(0x0024)) // ADC Data Register Low

// SPI Registers
#define SPCR   (*(volatile uint8_t *)(0x002D)) // SPI Control Register
#define SPSR   (*(volatile uint8_t *)(0x002E)) // SPI Status Register
#define SPDR   (*(volatile uint8_t *)(0x002F)) // SPI Data Register

#define SFIOR  (*(volatile uint8_t *)(0x0050)) //
#endif /* MCAL_MCAL_H_ */
