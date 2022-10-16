#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'prints only using the putchar'
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
int n = 1;
int outer_block;
int counter;

for (outer_block = 0; outer_block < 10; outer_block++)
{
	for (counter = 0; counter < 100; counter++)
	{
		if (n / 10 <= 11 * outer_block || n % 10 == 0)
		{
		}
		else
		{
			putchar(n / 100 + '0');
			putchar(n / 10 % 10 + '0');
			putchar(n % 10 + '0');
			if (n < 789)
			{
				putchar(',');
				putchar(' ');
			}
		}
		n++;
	}
}
putchar('\n');
return (0);
}
