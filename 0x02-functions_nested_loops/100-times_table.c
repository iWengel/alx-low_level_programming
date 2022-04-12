#include "main.h"
/**
 * print_times_table -a function to print the multiplication table of nth order
 *@n: value of the order
 * Return: 0 after printing the time table
 */
void print_times_table(int n)
{
	int a;
	int b;
	int c;

	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			c = a * b;
			if ((c / 10) == 0)
			{
				if (b == 0)
				{
					_putchar ('0');
				}
				if (b != 0)
				{
					_putchar (' ');
					_putchar ((c % 10) + '0');
				}
				if (b < n)
				{
					_putchar(',');
					_putchar (' ');
				}
			}
			else
			{
				_putchar ((c / 10) + '0');
				_putchar ((c % 10) + '0');
				if (b < n)
				{
					_putchar(',');
					_putchar (' ');
				}
			}
		}
		_putchar ('\n');
	}
}
