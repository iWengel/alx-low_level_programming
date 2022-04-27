#include "main.h"

/**
 * _evaluate - evaluates function sqrt
 * @i: argument integer
 * @n: argument integer
 * Return: evaluated sqrt
 */

int _evaluate(int i, int n)
{
	if (n == 0 || n == 1)
		return (n);
	else if (i * i < n)
		return (_evaluate(i + 1, n));
	else if (i * i == n)
		return (i);
	return (-1);
	return (-1);
}

/**
 * _sqrt_recursion - A function that returns the natural square root of a number
 * @n: argument integer
 * Return: -1 if number is not a perfect square, result if otherwise
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (i < 0)
		return (-1);
	return (_evaluate(i, n));
}
