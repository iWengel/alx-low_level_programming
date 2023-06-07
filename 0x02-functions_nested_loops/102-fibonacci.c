#include <stdio.h>

/**
 * main - program that prints the first 50 Fibonacci numbers
 *
 * Return: 0 (Success)
 */

int main(void)
{
	long int i = 0, j = 1, sum;
	int count;

	for (count = 0; count < 50; count++)
	{
		sum = i + j;
		if (count == 49)
			printf("%lu\n", sum);
		else
			printf("%lu, ", sum);
		i = j;
		j = sum;
	}
	return (0);
}

