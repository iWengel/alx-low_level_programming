#include "main.h"

/**
 * _strcmp - A function that compares two strings
 * @s1: first string
 * @s2: second string
 * Return: the difference between the strings
 */
int _strcmp(char *s1, char *s2)
{
	char *p1 = s1;
	char *p2 = s2;

	while (*p1 != '\0' && *p2 != '\0' && *p1 == *p2)
	{
		p1++;
		p2++;
	}
	return (*p1 - *p2);
}
