#include "main.h"

/**
 * _strlen_recursion - returns the length of the string using recursion
 * @s: pointer to the string
 * Return: Number of characters in the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
