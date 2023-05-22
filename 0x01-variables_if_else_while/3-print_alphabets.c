#include <stdio.h>

/**
 * main - Entry point
 * Program prints the alphabet in lowercase then in uppercase.
 *
 * Return: 0 after printing is done
 */
int main(void)
{
	int i = 97;
	int j = 65;

	while (i < 123)
	{
		putchar(i);
		++i;
	}
	while (j < 91)
	{
		putchar(j);
		++j;
	}
	putchar('\n');
	return (0);
}
