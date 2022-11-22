#include "main.h"
/**
 * jack_bauer - Prints every minute of the day starting
 * from 00:00 hrs
 * 
 * Return: returns nothing
 */
void jack_bauer(void)
{
	int hrs;
	int mins;
	
	hrs = 0;
	while (hrs < 24)
	{
		_putchar('0' + (hrs / 10));
		_putchar('0' + (hrs % 10));
		_putchar(':');
		mins = 0;
		while (mins < 60)
		{
			_putchar('0' + (mins / 10));
			_putchar('0' + (mins % 10));
			mins++;
		}
		hrs++
	}
}

