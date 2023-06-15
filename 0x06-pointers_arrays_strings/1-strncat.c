#include "main.h"

/**
 * *_strncat - concatenates two strings using at most n
 * bytes from the appended string
 * @dest: first part of the string
 * @src: second part of the string
 * @n: number specifying the index of the character in the
 * second string upto which is to be appended
 *
 * Return: pointer to the concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
		i++;
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
