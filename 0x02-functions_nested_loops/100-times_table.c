#include "main.h"

/**
 * print_times_table - prints the nth times table starting with 0
 * @n: argument integer
 *
 * Return: Nothing.
 */

void print_times_table(int n)
{
	int i, j, mul;

	if (n >= 0 && n <= 14)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				mul = i * j;
				if (z > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((mul / 100) + '0');
					_putchar(((mul / 10) % 10) + '0');
					_putchar((mul % 10) + '0');
				}
				else if (z > 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(((mul / 10) % 10) + '0');
					_putchar((mul % 10) + '0');
				}
				else
				{
					if (y != 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(mul + '0');
				}
			}
			_putchar('\n');
		}
	}
}

