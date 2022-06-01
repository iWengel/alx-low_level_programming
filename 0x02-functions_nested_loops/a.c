#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 after printing the first 98 Fibonacci numbers
 */
int main(void)
{
	int count;
	unsigned long a = 0, b = 1, sum;
	unsigned long a1, a2, b1, b2;
	unsigned long half1, half2;

	for (count = 0; count < 92; count++)
	{
		sum = a + b;
		printf("%lu, ", sum);

		a = b;
		b = sum;
	}

	a1 = a / 10000000000;
	b1 = b / 10000000000;
	a2 = a % 10000000000;
	b2 = b % 10000000000;

	for (count = 93; count < 99; count++)
	{
		half1 = a1 + b1;
		half2 = a2 + b2;
		if (a2 + b2 > 9999999999)
		{
			half1 = half1 + 1;
			half2 = half2 % 10000000000;
		}

		printf("%lu%lu", half1, half2);
		if (count != 98)
			printf(", ");

		a1 = b1;
		a2 = b2;
		b1 = half1;
		b2 = half2;
	}
	printf("\n");
	return (0);
}
