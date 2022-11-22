#include "main.h"
/**
 * times_table - 9 multiplication table
 *
 * Return: returns nothing
 */
void times_table(void)
{
	int num, count_1, count_2 = 0;

	while (count_2 < 10)
	{
		count_1 = 0;
		while (count_1 < 10)
		{
			if (count_1 == 0)
			{
				_putchar('0');
			}
			else
			{
				num = count_1 * count_2;
				if (num < 10)
				{
					_putchar(32);
					_putchar(32);
					_putchar('0' + num);
				}
				else
				{
					_putchar(32);
					_putchar('0' + (num / 10));
					_putchar('0' + (num % 10));
				}
			}
			if (count_1 <= 8)
				{
					_putchar(',');
				}
			count_1++;
		}
		_putchar('\n');
		count_2++;
	}
}
