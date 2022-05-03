#include "main.h"

/**
 * _puts - A function that prints a string
 * @str: a pointer pointing to the string variable
 * Return: nothing
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
