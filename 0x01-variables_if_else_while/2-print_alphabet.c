#include <stdio.h>
/**
 * main - entry point
 * Read the character
 * Return: 0 after printing the alphabet in lowercase
 */
int main(void)
{
	char alpha;
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
