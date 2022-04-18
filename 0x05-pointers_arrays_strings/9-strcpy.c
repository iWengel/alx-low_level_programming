#include "main.h"

/**
 * _strcpy - copies a string pointed by the second argument to the first one
 * @dest: Pointer to the paste location
 * @src: pointer to the copy location
 * Return: dest.
 */
char *_strcpy(char *dest, char *scr)
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
