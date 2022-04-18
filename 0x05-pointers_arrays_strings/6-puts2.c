#include "main.h"

/**
 * puts2 - A function that prints every other character in a string
 * @str: a pointer pointing to the string variable
 * Return: nothing
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i]; i+=2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
