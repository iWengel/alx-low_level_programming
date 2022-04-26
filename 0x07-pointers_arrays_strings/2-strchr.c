#include "main.h"

/**
 * _strchr - A function that locates a character in a string
 * @s: pointer to the string
 * @c: character to be located
 * Return: Pointer to the first occurence of the character or NULL.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		++s;
	}
	if (*s == c)
		return (s);
	return (0);
}
