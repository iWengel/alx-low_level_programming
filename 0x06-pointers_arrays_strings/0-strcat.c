#include "main.h"

/**
 * _strcat - A function that concatenates two strings
 * @dest: - first string
 * @src: - second string
 * Return: Pointer to the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int a = 0, b = 0;

	while(dest[a] != '\0')
	{
		a++;
	}
	while(src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
