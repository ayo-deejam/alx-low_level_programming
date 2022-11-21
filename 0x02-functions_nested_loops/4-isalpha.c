#include "main.h"
/**
 * _isalpha - Checks if character is an alphabet
 *@c: Input character
 *
 * Return: 1 if is alpha. 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
