#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'prints only using the putchar comb5'
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
int counter_1;
int counter_2;

for (counter_1 = 0; counter_1 < 100; counter_1++)
{
	for (counter_2 = 0; counter_2 < 100; counter_2++)
	{
		if (counter_1 >= counter_2)
		{
		}
		else
		{
			putchar(counter_1 / 10 + '0');
			putchar(counter_1 % 10 + '0');
			putchar(' ');
			putchar(counter_2 / 10 + '0');
			putchar(counter_2 % 10 + '0');
			if (counter_1 < 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
}
putchar('\n');
return (0);
}
