#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int b;
	int a;

	for (b = 48; b < 58; b++)
	{
		for (a = 48; a < b; a++)
		{
			putchar(a);
			putchar(b);
			if (a == 56 && b == 57)
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

