#include "main.h"

/**
 * print_alphabet_x10 - print alphabet
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int lowercase;
	int i = 0;


	while (i < 10)
	{
		for (lowercase = 'a' ; lowercase <= 'z'; lowercase++)
		{
			_putchar(lowercase);
		}

		i++;
		_putchar('\n');
	}


}
