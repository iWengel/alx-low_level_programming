#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return - Nothing.
 */

void times_table(void)
{
	int i, j, mul;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			mul = i * j;
			if (mul >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (mul / 10));
				_putchar('0' + (mul % 10));
			}
			else
			{
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar('0' + (mul));
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
