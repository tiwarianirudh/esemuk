//UART0 initialization and addressing
#include "MKL25Z4.h"
#include <stdint.h>
#include "uart.h"

void UART0_init(void);
void delaysMs(int n);

void UART0_init(void)
	{
		SIM->SCGC4 |= 0x400;
		SIM->SOPT2 |= 0x4000000;

		UART0->C2 = 0;
		UART0->BDH = 0x00;
		UART0->BDL = 0x17;
		UART0->C4 = 0x0F;
		UART0->C1 = 0x00;
		UART0->C2 = 0x08;

		SIM->SCGC5 = 0x0200;
		PORTA->PCR[2]= 0x0200;
	}

/*void send_char(char c)
	{
		while(!(UART0->S1 & 0xC0))
		  {

		  }
		  UART0->D = c;

	}*/

void send_char(char c)
	{
	while(!(UART0_S1 & 0x80)) {

	    }
        UART0->D = c;
	}

void send_string(char s[])
{
		int i=0;

		while (s[i] != 0x00)
		{
			send_char(s[i]);
			i++;
		}

}

void delayMs(int n)
{
	int i;
	int j;
	for (i=0;i<n;i++)
	for (j=0;j<n;j++)
	{
	}

}


