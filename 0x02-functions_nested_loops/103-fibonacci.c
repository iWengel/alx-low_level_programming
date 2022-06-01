#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int i = 0, j = 1, sum;
	long int evensum = 0;

	sum = i + j;
	while (sum < 4000000)
	{
		if (sum % 2 == 0)
			evensum += sum;
		i = j;
		j = sum;
		sum = i + j;
	}
	printf("%ld\n", evensum);
	return (0);
}
