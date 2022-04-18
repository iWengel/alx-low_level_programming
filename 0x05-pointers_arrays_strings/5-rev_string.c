#include "main.h"

/**
 * rev_string - A function that reverses a string
 * @s: pointer to the string
 * Return: A reversed string
 */
void rev_string(char *s)
{
	int i = 0;
	char *S;

	while (s[i] != '\0')
		i++;
	for (i = i - 1; i >= 0; i--)
	{
		S[i] = s[i];
	}
	return (S);
}
