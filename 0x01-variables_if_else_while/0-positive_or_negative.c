#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - entry point
*
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */

if (n>0)
{
printf("%i is positive",n);
}
elif (n<0)
{
printf("%i is negative",n);
}
else
{
printf("%i is zero", n);
}
return (0);
}
