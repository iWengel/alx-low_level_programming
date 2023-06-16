#include "main.h"

/**
 * *leet - encodes a string into 1337
 * @str: string to be encoded
 *
 * Return: pointer to the encoded string
 */

char *leet(char *str)
{
	int i, j;
	char *alpha = "aeotlAEOTL";
	char *num = "4307143071";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (str[i] == alpha[j])
				str[i] = num[j];
		}
	}
	return (str);
}
