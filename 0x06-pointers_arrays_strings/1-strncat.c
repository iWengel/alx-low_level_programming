#include "main.h"

/**
 * _strncat - A function that concatenates two strings with conditions on
 *            the second string
 * @dest: - first string
 * @src: - second string
 * @n: - condition for second string
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (dest[a] != '\0')
		a++;
	while (b < n)
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
