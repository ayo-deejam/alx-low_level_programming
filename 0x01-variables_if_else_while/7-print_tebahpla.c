#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'prints only using the putchar'
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
char alpha = 'z';
while (alpha >= 'a')
{
putchar(alpha);
alpha--;
}
putchar('\n');
return (0);
}
