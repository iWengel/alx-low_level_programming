#include "main.h"
/**
 * _isalpha - checks whether a character is an alphabetic character or not
 * @character: contains the argument to be checked
 * Return: 1 if true, 0 if false
 */
int _isalpha(int character)
{
	if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
