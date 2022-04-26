#include "main.h"

/**
 * set_string - A function that sets the value of a pointer to a char
 * @s: content to be copied
 * @to: string
 * Return: Nothing.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
