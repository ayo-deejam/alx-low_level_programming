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
int n = 0;
int counter_1;
int counter_2;

for (counter_1 = 0; counter_1 < 50; counter_1++)
{
	for (counter_2 = 0; counter_2 < 2; counter_2++)
	{
		putchar(n / 10 + '0');
		putchar(n % 10 + '0');
		putchar(' ');
		n++;
	}
	if (n < 99)
	{
		putchar(',');
		putchar(' ');
	}
}
putchar('\n');
return (0);
}
