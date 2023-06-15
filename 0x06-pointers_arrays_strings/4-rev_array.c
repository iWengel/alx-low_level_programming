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
	int i = 0, j, tmp;

	for (j = n - 1; j > i; j--)
	{
		tmp = a[j];
		a[j] = a[i];
		a[i] = tmp;
		i++;
	}
}
