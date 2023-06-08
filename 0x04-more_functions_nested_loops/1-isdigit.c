#include "main.h"

/**
 * _isdigit - function that checks for a digit
 * @c: ASCII value of argument character
 *
 * Return: 1 if c is digit; 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c < 58)
		return (1);
	else
		return (0);
}
