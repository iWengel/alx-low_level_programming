#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int i = 0, j = 1, sum;
	unsigned long int i1, i2, j1, j2, sum1, sum2;
	int count;

	count = 0;
	while (count < 92)
	{
		sum = i + j;
		printf("%lu, ", sum);
		i = j;
		j = sum;
		count++;
	}

	i1 = i / 10000000000;
	i2 = i % 10000000000;
	j1 = j / 10000000000;
	j2 = j % 10000000000;

	while (count < 98)
	{
		sum1 = i1 + j1;
		sum2 = i2 + j2;
		if (sum2 > 9999999999)
		{
			sum1 = sum1 + 1;
			sum2 = sum2 % 10000000000;
		}
		printf("%lu%lu", sum1, sum2);
		if (count == 97)
			break;
		printf(", ");
		i1 = j1;
		i2 = j2;
		j1 = sum1;
		j2 = sum2;
		count++;
	}
	printf("\n");
	return (0);
}
