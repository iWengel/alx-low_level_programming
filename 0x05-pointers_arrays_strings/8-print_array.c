#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints 'n' elements of an array of ints
 * @a: pointer to the array
 * @n: the number of integers to be printed
 *
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	i++;
	}
	printf("\n");
}
