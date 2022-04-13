#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 48;
	int b = 48;

	while (a <= 57)
	{
		while ((b <= 57) && (b > a))
		{
			putchar(a);
			putchar(b);
			if ((a == 56) && (b == 57))
			{
				break;
			}
			putchar(',');
			putchar(' ');
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
