#include "main.h"

/**
 * _strpbrk - A function that searches for a string for any of a set of bytes
 * @s: The string to be searched
 * @accept: string containing a list of bytes to be matched with s
 * Return: pointer to the byte in s matching accept or NULL if no match.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		i = 0;
		while (accept[i] != '\0')
		{
			if (*s == accept[i])
				return (s);
			i++;
		}
		s++;
	}
	return (0);
}
