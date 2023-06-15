#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: The array of integers
 * @n: Number of elements in the array
 *
 * Return: Nothing.
 */

void reverse_array(int *a, int n)
{
	int i, j;
	int b[n];

	for (i = 0; i <= n; i++)
	{
		b[i] = a[i];
	}
	for (j = 0; j < n; j++)
	{
		a[j] = b[(n - j) - 1];
	}
}
