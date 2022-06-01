#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 1;
	int j = 2;
	int sum, count;

	printf("%d, %d, ", i, j);
	count = 0;
	while (count < 48)
	{
		sum = i + j;
		printf("%d", sum);
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

