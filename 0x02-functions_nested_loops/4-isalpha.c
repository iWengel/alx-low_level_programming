#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: argument character
 *
 * Return: 1 if alphabetic, 0 if not.
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);

	else
		return (0);
}
