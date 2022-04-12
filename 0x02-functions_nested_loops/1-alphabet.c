#include "main.h"
/**
 * print_alphabet - entry point
 *
 * Return: 0 after printing the alphabet in lower case
 */
void print_alphabet(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		_putchar(lowercase);
	}
	_putchar('\n');
	return (0);
}
