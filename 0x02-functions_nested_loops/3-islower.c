#include "main.h"
/**
 * _islower - checks whether a character is lower case or not
 *
 * Return: Always 0 after check
 */
int _islower(int character)
{
	if (character > 'a' && character < 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
