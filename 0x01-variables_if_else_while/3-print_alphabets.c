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
char alpha = 'a';
char Alpha = 'A';
while (alpha <= 'z')
{
putchar(alpha);
alpha++;
}
while (Alpha <= 'Z')
{
putchar(Alpha);
Alpha++;
}
putchar('\n');
return (0);
}
