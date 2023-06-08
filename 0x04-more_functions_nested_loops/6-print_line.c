#include "main.h"

/**
 * print_line - function that drawa a straight line in the terminal
 * @n: integer indicating the number of times the character
 * '_' should be printed
 *
 * Return: Nothing
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
