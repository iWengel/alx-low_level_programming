#include "main.h"

/**
 * print_diagonal - prints diagonal line
 *@n: contains the number of times the character / is printed
 * Return: 0 after printing a diagonal line
 */

void print_diagonal(int n)
{
	int i;
	int b;
	
	for (i = 1; i < n; i++)
	{
		for (b = 0; b < i; b++)
		{
			_putchar (' ');
		}
		_putchar (92);
		_putchar ('\n');
	}
	_putchar ('\n');
}
