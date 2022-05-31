#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: Nothing.
 */
void print_alphabet(void)
{
	char i;

	i = 'a';
	while (i <= 'z')
	{
		_putchar(i);
	}
	_putchar('\n');
	return;
}
