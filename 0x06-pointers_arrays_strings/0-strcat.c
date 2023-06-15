#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: first part of the string
 * @src: second part of the string
 *
 * Return: pointer to the concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	for (i = i + 1; src[j] != '\0'; i++)
	{
		dest[i] = src[j];
		j++;
	}
	dest[i] = '\0';
	return (*dest);
}
