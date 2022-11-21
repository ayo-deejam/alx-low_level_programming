#include "main.h"
/**
 * print_alphabet_x10 - Prints aalphabets in lowercase
 *
 * Return: No return value
 */
void print_alphabet_x10(void)
{
	char alphabet = 'a';
	int i;

	for (i = 0; i < 10; i++)
	{
		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
	_putchar('\n');
	}
}
