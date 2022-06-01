#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: argument number
 *
 * Return: Nothing.
 */
void print_times_table(int n)
{
	int i;
	int j;
	int mul;

	if (n < 0 || n > 15)
		return;

	i = 0;
	while (i <= n)
	{
		j = 0;
		while (j <= n)
		{
			mul = i * j;
			if (j == 0)
				_putchar(mul + '0');
			else
			{
				if (mul / 10 == 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(mul + '0');
				}
				else if ((mul / 10) > 0 && (mul / 10) < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(mul / 10 + '0');
					_putchar(mul % 10 + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(((mul / 10) / 10) + '0');
					_putchar(((mul / 10) % 10) + '0');
					_putchar(mul % 10 + '0');
				}
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
