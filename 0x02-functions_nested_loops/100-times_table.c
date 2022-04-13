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

	if (n > 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				c = a * b;
				if (b < n)
				{
					if (c / 10 == 0)
					{
						_putchar(c)
					}
					else if (((c / 10) > 0) && ((c / 10) <= 9))
					{
						_putchar((c / 10) + '0');
						_putchar((c % 10) + '0');
					}
					else if (((c / 100) > 0) && ((c / 100) <= 9))
					{
						_putchar((c / 100) + '0');
						_putchar(((c / 10) % 10) + '0');
						_putchar((c % 10) + '0');
					}
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					 if (c / 10 == 0)
                                        {
                                                _putchar(c)
                                        }
                                        else if (((c / 10) > 0) && ((c / 10) <= 9))
                                        {
                                                _putchar((c / 10) + '0');
                                                _putchar((c % 10) + '0');
                                        }
                                        else if (((c / 100) > 0) && ((c / 100) <= 9))
                                        {
                                                _putchar((c / 100) + '0');
                                                _putchar(((c / 10) % 10) + '0');
                                                _putchar((c % 10) + '0');
                                        }
				}
			}				
		}
	}
	_putchar('\n');
}
