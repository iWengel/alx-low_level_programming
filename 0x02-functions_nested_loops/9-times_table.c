#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table
 *
 * Return: Nothing
 */
void times_table(void)
{
	int i;
	int j;
	int mul;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			mul = i * j;
			if (mul >= 0 && mul < 10)
				_putchar(mul + '0');
			else if (mul >= 10 && mul < 100)
			{
				_putchar(mul / 10 + '0');
				_putchar(mul % 10 + '0');
			}
			if (j == 9)
				break;
			else
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
