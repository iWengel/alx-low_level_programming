#include "main.h"

/**
 * print_numbers - prints the numbers from 0-9
 *@i: contains the character ASCII values
 * Return: 0 after printing the numbers
 */

void print_numbers(void)
{
	int i;
	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
