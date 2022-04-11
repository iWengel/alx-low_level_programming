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

	for (a = 48; a < 58; a++)
	{
		for (b = 48; b < 58; b++)
		{
			if (a < b && a != 57 && b != 58)
			{
				putchar(a);
				putchar(b);
				putchar(',');
				putchar(' ');
			}
			else if (a == 57 && b == 58)
			{
				break;
			}
		}
	}
	putchar('\n');
	return (0);
}

