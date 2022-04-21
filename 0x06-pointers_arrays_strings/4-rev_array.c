#include "main.h"

/**
 * reverse_array - a function that reverses an array
 * @a: an array of integers
 * @n: the number of elements of the array
 * Return: Reversed array.
 */
void reverse_array(int *a, int n)
{
	int b[m];
	int i = 0;
	
	m = 0;
	while (i <= n)
	{
		b[m] = a[n - i];
		i++;
		m++;
	}
	return (b);
}
