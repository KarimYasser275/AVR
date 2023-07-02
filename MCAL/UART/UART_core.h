/*
 * UART_core.h
 *
 *  Created on: Jun 30, 2023
 *      Author: user
 */

#ifndef MCAL_UART_UART_CORE_H_
#define MCAL_UART_UART_CORE_H_

// UDR - USART I/O Data Register
enum UDR_BITS {
    UDR0_BIT = 0  // USART I/O Data Register Bit 0
};

// UCSRA - USART Control and Status Register A
enum UCSRA_BITS {
    RXC_BIT = 7,    // USART Receive Complete
    TXC_BIT = 6,    // USART Transmit Complete
    UDRE_BIT = 5,   // USART Data Register Empty
    FE_BIT = 4,     // Frame Error
    DOR_BIT = 3,    // Data OverRun
    PE_BIT = 2,     // Parity Error
    U2X_BIT = 1,    // Double the USART Transmission Speed
    MPCM_BIT = 0    // Multi-processor Communication Mode
};

// UCSRB - USART Control and Status Register B
enum UCSRB_BITS {
    RXCIE_BIT = 7,  // RX Complete Interrupt Enable
    TXCIE_BIT = 6,  // TX Complete Interrupt Enable
    UDRIE_BIT = 5,  // USART Data Register Empty Interrupt Enable
    RXEN_BIT = 4,   // Receiver Enable
    TXEN_BIT = 3,   // Transmitter Enable
    UCSZ2_BIT = 2,  // Character Size Bit 2
    RXB8_BIT = 1,   // Receive Data Bit 8
    TXB8_BIT = 0    // Transmit Data Bit 8
};

// UCSRC - USART Control and Status Register C
enum UCSRC_BITS {
	UCSRC_URSEL_BIT = 7,   // Register Select between UCSRC or UBBRH registers (Must be written to one to access UCSRC)
    UMSEL1_BIT = 6,  // USART Mode Select Bit 1
    UMSEL0_BIT = 5,  // USART Mode Select Bit 0
    UPM1_BIT = 4,    // Parity Mode Bit 1
    UPM0_BIT = 3,    // Parity Mode Bit 0
    USBS_BIT = 3,    // Stop Bit Select
    UCSZ1_BIT = 2,   // Character Size Bit 1
    UCSZ0_BIT = 1,   // Character Size Bit 0
    UCPOL_BIT = 0    // Clock Polarity
};

// UBRRH - USART Baud Rate Register High
enum UBRRH_BITS {
	UBRRH_URSEL_BIT = 7,   // Register Select
    UBRR11_BIT = 3,  // USART Baud Rate Register Bit 11
    UBRR10_BIT = 2,  // USART Baud Rate Register Bit 10
    UBRR9_BIT = 1,   // USART Baud Rate Register Bit 9
    UBRR8_BIT = 0    // USART Baud Rate Register Bit 8
};

// UBRRL - USART Baud Rate Register Low
enum UBRRL_BITS {
    UBRR7_BIT = 7,   // USART Baud Rate Register Bit 7
    UBRR6_BIT = 6,   // USART Baud Rate Register Bit 6
    UBRR5_BIT = 5,   // USART Baud Rate Register Bit 5
    UBRR4_BIT = 4,   // USART Baud Rate Register Bit 4
    UBRR3_BIT = 3,   // USART Baud Rate Register Bit 3
    UBRR2_BIT = 2,   // USART Baud Rate Register Bit 2
    UBRR1_BIT = 1,   // USART Baud Rate Register Bit 1
    UBRR0_BIT = 0    // USART Baud Rate Register Bit 0
};

void UART_Init(void);
uint8_t UART_ReceiveData (void);
void UART_TransmitData (uint8_t data);
#endif /* MCAL_UART_UART_CORE_H_ */
