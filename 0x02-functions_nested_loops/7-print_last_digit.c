#include "main.h"
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

	int print(int num)
	{
		last_digit = num % 10;
		_putchar('0' + last_digit);
		return (last_digit);
	}
	if (num < 0)
	{
		num = num * (-1);
		print(num)
	}
	else
	{
		print(num)
	}
}
