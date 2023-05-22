#include <stdio.h>

/**
 * main - Entry point
 * Program prints the lowercase alphabet in reverse
 *
 * Return: 0 after printing is done
 */
int main(void)
{
	int i = 122;

	while (i > 96)
	{
		putchar(i);
		--i;
	}
	putchar('\n');
	return (0);
}
