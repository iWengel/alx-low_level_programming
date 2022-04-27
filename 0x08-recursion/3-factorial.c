#include "main.h"

/**
 * factorial - A function that returns the factorial of a given integer
 * @n: argument integer
 * Return: -1 if n is negative, factorial if otherwise.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
