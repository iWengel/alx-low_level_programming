#include "main.h"

/**
 * print_triangle - function that prints a triangle
 * @size: size of the triangle
 *
 * Return: Nothing
 */

void print_triangle(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i, j, k;

		for (i = 0; i < size; i++)
		{
			for (j = size; j > i + 1; j--)
				_putchar(' ');
			for (k = 0; k < j; k++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
