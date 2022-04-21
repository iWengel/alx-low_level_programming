#include "main.h"

/**
 * reverse_array - a function that reverses an array
 * @a: an array of integers
 * @n: the number of elements of the array
 * Return: Reversed array.
 */
void reverse_array(int *a, int n)
{
	int *start_a, *end_a, b;
	int i;

	start_a = a;
	end_a = a;
	for (i = 0; i < n - 1; i++)
	{
		end_a++;
	}
	for (i = 0; i < n / 2; i++)
	{
		b = *end_a;
		*end_a = *start_a;
		*start_a = b;
		start_a++;
		end_a--;
	}
}
