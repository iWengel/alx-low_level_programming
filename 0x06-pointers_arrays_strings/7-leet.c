#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 * @string; input string
 * Return: Manipulated string.
 */
char *leet(char *string)
{
	int count = 0, i;
	int lower_case[] = {97, 101, 111, 116, 108};
	int upper_case[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(string + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(string + count) == lower_case[i] || *(string + count) == upper_case[i])
			{
				*(string + count) = numbers[i];
				break;
			}
		}
		count++;
	}
	return (string);
}
