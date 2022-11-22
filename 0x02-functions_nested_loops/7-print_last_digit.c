#include "main.h"
#include <limits.h>
/**
 * print_last_digit - Prints the last digit
 * of a number
 * _abs - Computes absolute value of a number
 * @num: Input number
 * @last_digit: Last digit of input number
 *
 * Return: Last digit of the number
 */
int _abs(int num)
{
	if ((long long int) num < 0)
        {
                return (num * (-1));
        }
        else
        {
                return (num);
        }
}

int print_last_digit(int num)
{
	int last_digit;

	(long long int) num = _abs(num);
   	last_digit = num % 10;
	_putchar('0' + last_digit);
	return (last_digit);
}
