#include "main.h"

/**
 * _strspn - A function that gets the length of a prefix substring
 * @s: the string to be checked
 * @accept: string containing the list of characters to be matchaed in s
 * Return: No. of bytes in the initial segment of s.
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b;
	int count = 0;
	char *str1, *str2;

	str1 = s;
	str2 = accept;

	a = 0;
	while (str1[a] != '\0')
	{
		b = 0;
		while (str2[b] != '\0')
		{
			if (str2[b] == str1[a])
			{
				count++;
				break;
			}
			b++;
		}
		if (s[a] != accept[b])
			break;
		a++;
	}
	return (count);
}
