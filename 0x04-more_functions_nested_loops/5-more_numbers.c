#include "main.h"

/**
 * more_numbers - prints the numbers 0-14 10 times
 * @i: contains the counter
 * @j: contains the values to be printed
 * Return: 0 after printing
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			_putchar(j + '0');
		}
	}
	_putchar('\n');
}
