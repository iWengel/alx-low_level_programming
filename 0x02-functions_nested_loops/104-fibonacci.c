#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: 0 (Success)
 */

int main(void)
{
	unsigned long int i = 0, j = 1, sum;
	int count;

	for (count = 0; count < 98; count++)
	{
		sum = i + j;
		if (count == 97)
			printf("%lu\n", sum);
		else
			printf("%lu, ", sum);
		i = j;
		j = sum;
	}
	return (0);
}
