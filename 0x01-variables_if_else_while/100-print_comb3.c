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
int col;
int row = 0;

for (col = 0; col < 100; col += 10)
{
	row++;
	for (m = 1; m < 11; m++)
	{
		if (n < (col + row) || n % 10 == 0)
		{
		}
		else
		{
			putchar(n / 10 + '0');
			putchar(n % 10 + '0');
			if (n < 89)
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
