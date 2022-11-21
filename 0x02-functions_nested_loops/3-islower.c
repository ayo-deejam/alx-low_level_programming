#include "main.h"
/**
 * _islower - Checks if character is lower case
 *@c: Input character
 *
 * Return: 1 if is lower. 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
