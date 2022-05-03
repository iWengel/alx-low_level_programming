#include "main.h"

/**
 * _memcpy - A function that copies a memory area
 * @dest: copy destination memory area
 * @src: copy source memory area
 * @n: The number of bytes to be copied
 * Return: Pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
