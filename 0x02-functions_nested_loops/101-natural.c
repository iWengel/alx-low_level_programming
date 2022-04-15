#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 after printing the sum of all natural numbers below 1024 that are multiples of 3 or 5
 */
int main(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
