#include "main.h"

/**
 * puts_half - function that prints half of a string
 * @str: pointer to the argument string
 *
 * Return: Nothing.
 */

void puts_half(char *str)
{
	int length = 0, i;

	while (str[length] != '\0')
		length++;
	i = (length + 1) / 2;
	for (length = i; str[length]; length++)
		_putchar(str[length]);
	_putchar('\n');
}
