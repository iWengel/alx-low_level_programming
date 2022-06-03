#include "main.h"

/**
 * print_line - prints a line
 * @n: contains the number of times the character _ is printed
 * Return: 0 after printing a line
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
