#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string
 * @string: string
 * Return: Capitalized string
 */
char *cap_string(char *string)
{
	int a = 0, i;
	int separators[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	if (*(string + a) >= 97 && *(string + a) <= 122)
		*(string + a) = *(string + a) - 32;
	a++;
		while (*(string + a) != '\0')
		{
			for (i = 0; i < 13; i++)
			{
				if (*(string + a) == separators[i])
				{
					if ((*(string + (a + 1)) >= 97) && (*(string + (a + 1)) <= 122))
						*(string + (a + 1)) = *(string + (a + 1)) - 32;
					break;
				}
			}
			a++;
		}
		return (string);
}
