#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Prints from given number to 98
 * @n: given number
 *
 * Return: returns nothing
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n < 98)
			{
				printf(", ");
			}
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n > 98)
			{
				printf(", ");
			}
			n--;
		}
	}
	printf("\n");
}
