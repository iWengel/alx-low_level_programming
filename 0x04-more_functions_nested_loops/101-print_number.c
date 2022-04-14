#include "main.h"

/**
* print_number - a function that prints an integer
*@n: contains the value to be printed
* Return: 0 after printing
*/

void print_number(int n)
{
	if (n == 0)
	{
		_putchar('0');
	}
	else 
	{
		if (n / 10 == 0)
		{
			_putchar(n + '0');
		}
		else if (((n / 10) != 0) && ((n / 100) == 0))
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		else if (((n / 100) != 0) && ((n / 1000) == 0))
		{
			_putchar((n / 100) +'0');
			_putcahr(((n / 10) % 10) + '0');
			_putchar((n % 10) + '0');
		}
		else if (((n / 1000) != 0) && ((n / 10000) == 0))
		{
			_putchar((n / 1000) + '0');
			_putchar(((n / 100) % 10) + '0');
			_putchar(((n % 100) / 10) + '0');
			_putchar(((n % 100) % 10) + '0');
		}
	}
	_putchar('\n');
	return (0);
}

