//Program for testing receiver through RGB LED
/*#include "MKL25Z4.h"
#include "rxtestled.h"

void UART0_init(void);
void delayin(int n);
void LED_init(void);
void LED_set(char value);

void send_char(char c)
	{
		while(!(UART0->S1 & 0xC0))
		  {

		  }
		  UART0->D = c;

	}
void UART0_IRQHandler()
{
	char c;
	c = UART0->D;
	LED_set(c);
	send_char(c);
}

void UART0_init()
{
	SIM->SCGC4 |= 0x0400;
	SIM->SOPT2 |= 0x04000000;

	UART0->C2 = 0;
	UART0->BDH = 0x00;
	UART0->BDL = 0x17;

	UART0->C4 = 0x0F;
	UART0->C1 = 0x00;
	UART0->C2 = 0x24;
	NVIC->ISER[0]|= 0x00001000;

	SIM->SCGC5 |= 0x0200;
	PORTA->PCR[1] = 0x0200;

}

void LED_init()
{
	SIM->SCGC5 |= 0x400;
	SIM->SCGC5 |= 0x1000;
	PORTB->PCR[18] = 0x100;
	PTB->PDDR |= 0x40000;
	PTB->PSOR |= 0x40000;
	PORTB->PCR[19] = 0x100;
	PTB->PDDR |= 0x80000;
	PTB->PSOR |= 0x80000;
	PORTD->PCR[1]=0x100;
	PTD->PDDR |= 0x02;
	PTD->PSOR |= 0x02;

}


void LED_set(char value)
{
	if(value == 'R')
	PTB->PCOR = 0x40000;
	else
	PTB->PSOR = 0x40000;

	if(value == 'G')
	PTB->PCOR = 0x80000;
	else
	PTB->PSOR = 0x80000;

	if(value == 'B')
	PTD->PCOR = 0x02;
	else
	PTD->PSOR = 0x02;
}*/
