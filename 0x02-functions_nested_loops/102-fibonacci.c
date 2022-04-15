#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 after printing the first 50 Fibonacci numbers
 */
int main(void)
{
	int a = 1;
	int b = 2;
	int sum;
	int count;

	printf("1, ");
	printf("2, ");
	for (count = 0; count < 48; count++)
	{
		sum = a + b;
		printf("%d", sum);
		printf(", ");
		a = b;
		b = sum;
	}
	printf("\n");
	return (0);
}

