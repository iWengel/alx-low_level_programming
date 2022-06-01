#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int i = 1, j = 2, sum;
	int count;

	printf("%ld, %ld, ", i, j);
	count = 0;
	while (count < 48)
	{
		sum = i + j;
		printf("%ld", sum);
		if (count == 47)
			break;
		printf(", ");
		i = j;
		j = sum;
		count++;
	}
	putchar('\n');
	return (0);
}

