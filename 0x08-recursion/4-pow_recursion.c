#include "main.h"

/**
 * _pow_recursion - returns x raised to the power of y using recursion
 * @x: argument (base integer)
 * @y: argument (power integer)
 * Return: -1 if power(y) < 0, result if otherwise
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
