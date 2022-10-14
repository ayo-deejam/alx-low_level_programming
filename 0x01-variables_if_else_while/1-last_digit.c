#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'prints to the standard output using puts function'
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n % 10 > 5)
	{
	printf("Last digit of %i is %i and is greater than 5", n, n % 10);
	}
	else
	{
	if (n % 10 == 0)
	{
	printf("Last digit of %i is %i and is 0", n, n % 10);
	}
	else
	{
	printf("Last digit of %i is %i and is less than 6 and not 0", n, n % 10);
	}
	}
	return (0);
}
