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

	for (a = 48; a <= 78; a++)
	{
		for (b = a + 1; b <= 78; b++)
		{
			putchar(a);
			putchar(b);
			if ((a == 56) && (b == 78))
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
