#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: copy destination string
 * @src: string containing characters to be copied
 * @n: number specifying the index of the character up to which
 * the string is to be copied
 *
 * Return: pointer to the modified(copied) string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; i < n && src[i] != '\0'; i++)
		;
	for (j = 0; j < i && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	for (; j < n; j++)
		dest[j] = '\0';
	return (dest);
}
