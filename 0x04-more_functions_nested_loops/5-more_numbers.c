#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers 0-14
 *
 * Return: Nothing
 */

void more_numbers(void)
{
	int i, count;

	for (count = 0; count < 10; count++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i >= 10)
				_putchar('0' + (i / 10));
			_putchar('0' + (i % 10));
		}
		_putchar('\n');
	}
}
