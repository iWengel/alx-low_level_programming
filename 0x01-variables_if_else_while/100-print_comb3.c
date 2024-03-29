#include <stdio.h>

/**
 * main - entry point
 * Program prints all possible different combinations of two digits.
 *
 * Return: 0 after printing is done.
 */
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		int j = 48;

		while (j < 58)
		{
			if (i < j)
			{
				putchar(i);
				putchar(j);
				if (i == 56 && j == 57)
					break;
				putchar(',');
				putchar(' ');
			}
			++j;
		}
		++i;
	}
	putchar('\n');
	return (0);
}
