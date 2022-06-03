#include "main.h"

/**
 * more_numbers - prints 10 times the numbers 1-14
 *
 * Return: Nothing.
 */
void more_numbers(void)
{
	int i;
	int count;

	for (count = 0; count < 10; count++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i >= 10)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
