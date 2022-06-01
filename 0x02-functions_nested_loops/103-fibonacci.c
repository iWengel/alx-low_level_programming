#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int i = 1, j = 1, sum;
	long int evensum = 0;
	
	sum = 0;
	while (sum < 400000)
	{
		sum = i + j;
		if (sum % 2 == 0)
			evensum += sum;
		i = j;
		j = sum;
		sum += j;
	}
	printf("%ld\n", evensum);
	return (0);
}
