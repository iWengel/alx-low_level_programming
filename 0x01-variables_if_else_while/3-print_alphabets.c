#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 after printing the alphabet in lowercase and uppercase
 */
int main(void)
{
	char uppercase;
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		putchar(lowercase);
	}
	for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
	{
		putchar(uppercase);
	}
	putchar('\n');
	return (0);
}
