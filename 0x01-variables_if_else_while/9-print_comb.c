#include <stdio.h>

/**
 * main - Entry point
 * Program prints all possible combinations of single-digit numbers
 *
 * Return: 0 after printing is done
 */
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
		if (i == 57)
			break;
		++i;
	}
	putchar('\n');
	return (0);
}
