#include "main.h"
#include <stdio.h>

/**
* print_number - a function that prints an integer
*@n: contains the value to be printed
* Return: 0 after printing
*/

void print_number(int n)
{
	unsigned int m;

	if (n < 0)
	{
		_putchar('-');
		m = -n;
	}
	else 
	{
		m = n;
	}
	if (m / 10 != 0)
		print_number(m / 10);
		_putchar((m / 10) + '0');
}
