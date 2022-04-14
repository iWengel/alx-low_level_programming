#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * Return: 0 after printing a diagonal line
 */

void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 1; i <= n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\');
		_putchar('\n');
	}
	_putchar('\n');
}
