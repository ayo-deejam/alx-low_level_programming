#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: input name.
 * @f: pointer to function f.
 *
 * Return: no return.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
