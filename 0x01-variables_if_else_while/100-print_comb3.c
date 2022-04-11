#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			putchar(a);
			putchar(b);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

