#include <stdio.h>
/**
 * main - entry point
 * Read the character
 * Return: 0 after printing the alphabet in lowercase backwards
 */
int main(void)
{
	char input;

	for (input = 122; input <= 97; input--)
	{
		putchar(input);
	}
	putchar('\n');
	return (0);
}
