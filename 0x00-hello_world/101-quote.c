#include <stdio.h>
#include <string.h>
/**
 * * main - Entry point
 *
 * * Description: 'prints to the standard output using printf function'
 *
 * * Return: Always 1 (Success)
 */
int main(void)
{
char string[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
fprintf(stderr, "%s\n", string);
return (1);
}
