#include "main.h"
/**
 * main - A program that prints putchar
 *
 * Return: Always 0
 */
int main(void)
{
	char string[] = "_putchar";
	int i = 0;

	int len_of_array = sizeof(string) / sizeof(string[0]);
	for (i; i < len_of_array; i++)
		_putchar(string[i]);
	_putchar('\n');
return(0);
}
