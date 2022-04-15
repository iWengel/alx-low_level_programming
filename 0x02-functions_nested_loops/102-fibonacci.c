#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 after printing the first 50 Fibonacci numbers
 */
int main(void)
{
	unsigned long a = 1;
	unsigned long b = 2;
	unsigned long sum;
	int count;

	printf("1, ");
	printf("2, ");
	for (count = 0; count < 48; count++)
	{
		sum = a + b;
		printf("%ld", sum);
		if (count ==  47)
			printf("\n");
		else
			printf(", ");
		a = b;
		b = sum;
	}
	return (0);
}

