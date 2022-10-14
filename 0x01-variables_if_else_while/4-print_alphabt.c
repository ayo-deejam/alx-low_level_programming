#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'prints excludes e and q'
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
char alpha = 'a';
while (alpha <= 'z')
{
if (alpha == 'e' || alpha == 'q')
{
alpha++;
}
else
{putchar(alpha);
alpha++;
}
}
putchar('\n');
return (0);
}
