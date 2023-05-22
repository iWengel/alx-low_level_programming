#include <stdio.h>

/**
 * main - entry point
 * Program prints all possible combinations of two two digit numbers.
 *
 * Return: 0 after printing is done.
 */
int main(void)
{
	int a = 0;

	while (a < 100)
	{
		int b = a + 1;

		while (b < 100)
		{
			putchar (a / 10 + '0');
			putchar (a % 10 + '0');
			putchar (' ');
			putchar (b / 10 + '0');
			putchar (b % 10 + '0');
			if (a == 98 && b == 99)
			{
				break;
			}
			putchar(',');
			putchar (' ');
			++b;
		}
		++a;
	}
	putchar('\n');
	return (0);
}
