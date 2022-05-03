#include "main.h"
#include <stdio.h>
/**
 * _abs - computes the absolute value of a number
 *@n: contains the value to be computed
 *Return: 0 after computation
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * (-1));
	}
	else
	{
		return (n);
	}
}

