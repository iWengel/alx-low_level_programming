#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: 0 (Success)
 */

void print_alphabet(void)
{
	int i = 97;

	while (i < 123)
	{
		_putchar(i);
		i++;
	}

	return (0);
}
