#include "main.h"
/**
 * print_sign - check the sign of a number
 * @n: contains the value to be checked
 * Return: 0 if 0, 1 if positive, -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (-1);
	}
}
