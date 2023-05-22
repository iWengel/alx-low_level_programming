#include <stdio.h>

/**
 * main - Entry point
 * Program prints all lowercase letters except "q" and "e"
 *
 * Return: 0 after printing is done
 */
int main(void)
{
	int i = 97;

	while (i < 123)
	{
		if (i != 101 && i != 113)
			putchar(i);
		++i;
	}
	putchar('\n');
	return (0);
}
