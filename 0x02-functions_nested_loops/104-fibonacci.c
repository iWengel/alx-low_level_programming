#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void);
{
	unsigned long int i = 0, j = 1, sum;
	int count;

	count = 0;
	while (count < 98)
	{
		sum = i + j;
		printf("%lu", sum);
		if (count == 97)
			break;
		printf(", ");
		i = j;
		j = sum;
		count++;
	}
	printf("\n");
	return (0);
}
