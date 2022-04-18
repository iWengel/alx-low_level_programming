#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 * @a: pointer to int a
 * @b: pointer to int b
 * Return: Nothing.
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
