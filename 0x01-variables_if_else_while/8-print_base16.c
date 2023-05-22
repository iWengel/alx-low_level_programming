#include <stdio.h>
/**
 * main - entry point
 * Program prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = 48;
	int j = 97;

	while (i < 58)
	{
		putchar(i);
		++i;
	}
	while (j < 103)
	{
		putchar(j);
		++j;
	}
	putchar('\n');
	return (0);
}
