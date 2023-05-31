#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: argument integer
 *
 * Return: The absolute value of argumment integer.
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return ((-1 * n));
}
