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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i]
	}
	for (i; dest[i] != '\0'; i++)
		dest[i] = dest[i];
	dest[i] = '\0';
	return (dest);
}
