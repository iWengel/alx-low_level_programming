#include "main.h"

/**
 * get_bit - returns the value of a vit at a given index
 * @n: number to look into
 * @index: index of the bit
 *
 * Return: the value of the bit at the index, or -1 if it fails
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int val;

	if (index > 63)
		return (-1);

	val = (n >> index) & 1;
	return (val);
}
