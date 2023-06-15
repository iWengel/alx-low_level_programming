#include "main.h"

/**
 * *string_toupper - changes all lowercase letters of a string to uppercase
 *
 * Return: pointer to the changed string
 */

char *string_toupper(char *s)
{
	int i, j = 0;

	for (i = 0; s[i] != '\0'; i++)
		j++;
	j = j + 1;

	char b[j];

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			b[i] = s[i] - 32;
		else
			b[i] = s[i];
	}
	b[i] = '\0';
	return (b);
}
