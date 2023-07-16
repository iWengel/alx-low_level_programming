#include "main.h"

/**
 * _memset - A functio that fills memory with a constant byte
 * @s: pointer to the memory area
 * @b: constant byte (used to fill the memory area)
 * @n: number of bytes of memory to be filled
 * Return: Pointer to memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
