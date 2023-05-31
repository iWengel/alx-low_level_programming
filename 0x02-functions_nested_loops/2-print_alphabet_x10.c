#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times on stdout
 *
 * Return: Nothing.
 */
void print_alphabet_x10(void)
{
	int i = 0, j;

	while (i < 10)
	{
		j = 97;

		while (j < 123)
		{
			_putchar(j);
			j++;
		}

		_putchar('\n');
		i++;
	}
}
