#include "main.h"

/**
 * _strstr - A function that locates a substring
 * @haystack: Pointer to the string to look in
 * @needle: Pointer to the substring to be searched for
 * Return: A pointer to the beginning of the located substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *s1, *s2;

	while (*haystack != '\0')
	{
		s1 = haystack;
		s2 = needle;

		while (*haystack != '\0' && *s2 != '\0' && *haystack == *s2)
		{
			haystack++;
			s2++;
		}
		if (*s2 == '\0')
			return (s1);
		haystack = s1 + 1;
	}
	return (0);
}
