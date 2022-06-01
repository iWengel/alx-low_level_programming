#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from argument to 98
 * @n: argument number to start from
 *
 * Return: Nothing
 */
void print_to_98(int n)
{
	if (n == 98)
		printf("%d", n);
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n == 98)
				break;
			printf(", ");
			n--;
		}
	}
	else
	{
		while (n <= 98)
		{
			printf("d", n);
			if (n == 98)
				break;
			printf(", ");
			n++;
		}
	}
	_putchar('\n');
}
