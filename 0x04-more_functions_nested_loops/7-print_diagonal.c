#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: integer indicating the number of times the character '\'
 * should be printed
 *
 * Return: Nothing
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
