#include "main.h"

/**
 * flip_bits - returns the number of bits one needs to flip to get from
 * 		one number to another
 * @n: variable containing the number
 * @m: variable containing the other number
 *
 * Return: the number of bits that need to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int tmp;
	unsigned long int temp = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		tmp = temp >> i;
		if (tmp & 1)
			count++;
	}
	return (count);
}
