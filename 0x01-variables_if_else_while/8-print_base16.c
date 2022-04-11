#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char base16;

	for (base16 = 48; base16 <= 57; base16++)
	{
		putchar(base16);
	}
	for (base16 = 97; base16 <= 102; base16++)
	{
		putchar(base16);
	}
	putchar('\n');
	return (0);
}
