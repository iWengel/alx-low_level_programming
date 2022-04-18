#include "main.h"

/**
 * puts_half - A function that prints the second half of a string
 * @str: Pointer towards the string
 * Return: nothing
 */
void puts_half(char *str)
{
	int i, half;

	i = 0;
	while (str[i] != '\0')
		i++;
	half = (i + 1) / 2;
	for (i = half; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
