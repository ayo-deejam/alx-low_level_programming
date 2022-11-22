#include "main.h"
#include <limits.h>
/**
 * print_last_digit - Prints the last digit
 * of a number
 * @num: Input number
 *
 * Return: Last digit of the number
 */

int print_last_digit(int num)
{
	int last_digit;

	if (num < 0)
	{
		last_digit = (num % 10) * (-1);

	}
	else
	{
		last_digit = num % 10;
	}
	_putchar('0' + last_digit);
	return (last_digit);
}
