#include "main.h"

/**
 * _strlen_recursion - returns the length of the string using recursion
 * @s: pointer to the string
 * Return: Number of characters in the string.
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	while (*s != '\0')
		length++;
	return (length);
}



