#include "main.h"

/**
 * binary_to_uint - converts a binary number into an unsigned int
 * @b: pointer to the string of binary characters
 *
 * Return: the converted integer, or 0 if there are one or more
 * characters in the string b that is not 0 or 1 OR if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int uint = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		uint = 2 * uint + (b[i] - '0');
	}
	return (uint);
}
