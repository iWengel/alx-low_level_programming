#include "main.h"

/**
 * more_numbers - prints the numbers 0-14 10 times
 * Return: 0 after printing
 */

void more_numbers(void)
{
	int i;
	int j;
	int a;
	int b;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j < 10)
			{
				b = j;
			}
			else
			{
				a = j / 10;
				b = j % 10;
				_putchar(a + '0');
			}
			_putchar(b + '0');
		}
	}
	_putchar('\n');
}
