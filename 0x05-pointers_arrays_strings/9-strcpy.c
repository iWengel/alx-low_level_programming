#include "main.h"

/**
 * *_strcpy - function that copies the string pointed to by src, to the
 * buffer pointed by dest.
 * @src: pointer pointing to the source of the string
 * @dest: pointer pointing to the destination of the string
 *
 * Return: The string.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
	dest[i] = src[i];
	i++;
	}
	dest[i] = '\0';
	return (dest);
}
