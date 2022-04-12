#include "main.h"
/**
 * _isalpha - checks whether a character is an alphabetic character or not
 * @ch: contains the argument to be checked
 * Return: 1 if true, 0 if false
 */
int _isalpha(int ch)
{
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
