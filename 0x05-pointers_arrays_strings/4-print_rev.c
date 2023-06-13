#include "main.h"

/**
 * print_rev - function that prints a string in reverse
 * @s: pointer to the string to be reversed
 *
 * Return: Nothing.
 */

void print_rev(char *s)
{
	int i;

	for (i = sizeof(s); i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
