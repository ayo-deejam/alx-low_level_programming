#include "main.h"
/**
 * abs - Computes the absolue value of a number
 * @num: Input interger
 *
 * Return: Returns the absolute number
 */
int _abs(int num)
{
	if (num < 0)
	{
		return (num * (-1));
	}
	else
	{
		return (num);
	}
}
