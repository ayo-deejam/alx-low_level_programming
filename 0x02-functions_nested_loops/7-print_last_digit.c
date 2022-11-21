#include "main.h"
/**
 * print_last_digit - Prints the last digit
 * of a number
 * @num: Input number
 * @last_digit: Last digit of input number
 *
 * Return: Last digit of the number
 */
int print_last_digit(int num)
{
	num = _abs(num);
	int last_digit = num % 10;

	_putchar('0' + last_digit);
	return (last_digit);
}
