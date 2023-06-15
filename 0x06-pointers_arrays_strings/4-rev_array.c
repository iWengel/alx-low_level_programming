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
	int i;
	int b[n];

	for (i = 0; i <= n; i++)
		b[n] = a[n];

	for (i = 0; i < n; i++)
	{
		a[i] = b[(n - i) - 1];
	}
}
