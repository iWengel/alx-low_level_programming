#include "main.h"

/**
 * *string_toupper - changes all lowercase letters of a string to uppercase
 * @s: Input string
 *
 * Return: pointer to the changed string
 */

char *string_toupper(char *s)
{i
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
	}
	return (b);
}
