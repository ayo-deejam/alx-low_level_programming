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
int m;
while (n < 100)
	{
	if (n < 10)
		{
		putchar('0');
		putchar(n + '0');
		}
	else
		{
		for (m = 99; m > 10; m--)
			{
			if ((n / 10) == (n % 10) || (n / 10 + n % 10) == (m / 10 + m % 10))
				{
				n++;
				}
			else
				{
				putchar(n + '0');
				}
			break;
			}
		}
	putchar(',');
	putchar(' ');
	n++;
	}
return (0);
}
