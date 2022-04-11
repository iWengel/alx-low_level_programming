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

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			if (b > a)
			{
				putchar(a);
				putchar(b);
				putchar(',');
				putchar(' ');
			}
			else if (a == 56 && b == 57)
			{
				break;
			}
		}
	}
	putchar('\n');
	return (0);
}

