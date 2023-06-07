#include <stdio.h>

/**
 * main - prints the sum of even-valued Fibonacci numbers
 * less than 4000000
 *
 * Return: 0 (Success)
 */

int main(void)
{
	long int i = 0, j = 1, sum = 0, total;

	while (sum < 4000000)
	{
		sum = i + j;
		if ((sum % 2) == 0)
			total += sum;
		i = j;
		j = sum;
	}
	printf("%lu\n", total);
	return (0);
}
