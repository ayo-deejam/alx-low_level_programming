#include "main.h"
/**
 * print_alphabet - Prints aalphabets in lowercase
 *
 * Return: No return value
 */
void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
