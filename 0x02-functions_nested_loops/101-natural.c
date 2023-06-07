#include <stdio.h>

/**
 * main - program that computes and prints a sum
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int i;
	long int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
			sum += i;
	}
	printf("%lu\n", sum);
}
