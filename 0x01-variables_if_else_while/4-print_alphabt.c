#include <stdio.h>
/**
 * main - entry point
 * Read the character
 * Return: 0 after printing the alphabet in lowercase
 */
int main(void)
{
	char input;

	for (input = 'a'; input <= 'z'; input++)
	{
		if (input == 'e')
			continue;
		else if (input == 'q')
			continue;
		else
		{
			putchar(input);
		}
	}
	putchar('\n');
	return (0);
}
