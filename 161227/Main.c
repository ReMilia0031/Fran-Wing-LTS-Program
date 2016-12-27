#include <htc.h>
__CONFIG(FOSC_HS & WDTE_OFF & PWRTE_ON & CP_OFF);

#define _XTAL_FREQ 20000000
void main()
{
	TRISB = 0x00;
	TRISA = 0xFF;

	PORTB = 0xFF;
	__delay_ms(500);

	PORTB = 0x00;
	__delay_ms(100);
	PORTB = 0x80;
	__delay_ms(100);
	PORTB = 0x00;
	__delay_ms(100);
	PORTB = 0x80;
	__delay_ms(100);
	PORTB = 0x00;
	__delay_ms(100);
	PORTB = 0x80;
	__delay_ms(100);
	PORTB = 0x00;
	__delay_ms(100);
	PORTB = 0x80;
	__delay_ms(100);
	PORTB = 0x00;
	__delay_ms(100);
	PORTB = 0x80;
	__delay_ms(100);
	PORTB = 0x00;
	__delay_ms(100);
	PORTB = 0x80;
	__delay_ms(100);
	PORTB = 0x00;
	__delay_ms(100);
	PORTB = 0x80;
	__delay_ms(100);
	PORTB = 0x00;
	__delay_ms(1000);

	PORTB = 0x80;
	__delay_ms(1000);
	PORTB = 0xC0;
	__delay_ms(500);
	PORTB = 0xE0;
	__delay_ms(200);
	PORTB = 0xF0;
	__delay_ms(100);
	PORTB = 0xF1;
	__delay_ms(75);
	PORTB = 0xF3;
	__delay_ms(1000);
	PORTB = 0xF7;
	__delay_ms(125);
	PORTB = 0xFF;
	__delay_ms(2000);

	PORTB = 0x80;
	__delay_ms(250);
	PORTB = 0xC0;
	__delay_ms(250);
	PORTB = 0xE0;
	__delay_ms(250);
	PORTB = 0x70;
	__delay_ms(250);
	PORTB = 0x31;
	__delay_ms(250);
	PORTB = 0x13;
	__delay_ms(250);
	PORTB = 0x07;
	__delay_ms(250);
	PORTB = 0x0E;
	__delay_ms(250);
	PORTB = 0x8C;
	__delay_ms(250);
	PORTB = 0xC8;
	__delay_ms(250);
	PORTB = 0xE0;
	__delay_ms(250);
	PORTB = 0x70;
	__delay_ms(250);
	PORTB = 0x31;
	__delay_ms(250);
	PORTB = 0x13;
	__delay_ms(250);
	PORTB = 0x07;
	__delay_ms(250);
	PORTB = 0x0E;
	__delay_ms(250);
	PORTB = 0x8C;
	__delay_ms(250);
	PORTB = 0xC8;
	__delay_ms(2000);
	PORTB = 0x00;
	__delay_ms(1000);

	while(1)
	{
		while (RA0 == 0 && RA1 == 0)
		{
				PORTB = 0x7E;
				__delay_ms(1000);
				PORTB = 0xBD;
				__delay_ms(1000);
				PORTB = 0xDB;
				__delay_ms(1000);
				PORTB = 0xE7;
				__delay_ms(1000);
		}
		while (RA0 == 1 && RA1 == 0)
		{
				PORTB = 0xAA;
				__delay_ms(1000);
				PORTB = 0x55;
				__delay_ms(1000);
				PORTB = 0xA5;
				__delay_ms(1000);
				PORTB = 0x5A;
				__delay_ms(1000);
		}
		while (RA0 == 0 && RA1 == 1)
		{
				PORTB = 0x80;
				__delay_ms(500);
				PORTB = 0x40;
				__delay_ms(500);
				PORTB = 0x20;
				__delay_ms(500);
				PORTB = 0x10;
				__delay_ms(500);
				PORTB = 0x01;
				__delay_ms(500);
				PORTB = 0x02;
				__delay_ms(500);
				PORTB = 0x04;
				__delay_ms(500);
				PORTB = 0x08;
				__delay_ms(500);
		}
		while (RA0 == 1 && RA1 == 1)
		{
			PORTB = 0xFF;
			__delay_ms(10000);
			PORTB = 0x00;
			__delay_ms(5000);
		}
	}
}