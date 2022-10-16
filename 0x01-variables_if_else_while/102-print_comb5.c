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
int m;
int col;
int row = 0;

for (col = 0; col < 50; col++)
{
	for (m = 0; m < 2; m++)
	{
		putchar(n / 10 + '0');
		putchar(n % 10 + '0');
		putchar(' ');
		n++
	}
	if (n < 99)
	{
		putchar(',');
	}
}
putchar('\n');
return (0);
}
