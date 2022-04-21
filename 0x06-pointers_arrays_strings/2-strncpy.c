#include "main.h"

/**
 * _strncpy - A function that copies a string
 * @dest: first string
 * @src: second string
 * @n: number of characters
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (b < n)
	{
		src[b];
		b++;
	}
	while (b >= n)
	{
		while (dest[a] != '\0')
		{
			src[b] = dest[a];
			a++;
			b++;
		}
	}
	src[b] = '\0';
	return (src);
}
