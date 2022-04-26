#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - A function that prints the sum diagonals
 * @a: array of characters
 * @size: order of matrix
 * Return: Nothing.
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int sum_diag1 = 0, sum_diag2 = 0;

	while (i < size)
	{
		sum_diag1 = sum_diag1 + *(a + i * size + i);
		sum_diag2 = sum_diag2 + *(a + i * size + size - i - 1);
		i++;
	}
	printf("%i, %i\n", sum_diag1, sum_diag2);
}
