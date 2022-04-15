#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 after printing tthe sum of the even valued Fibonaccis
 */
int main(void)
{
	unsigned long a = 0, b = 1, sum;
	float total;

	while (1)
	{
		sum = a + b;
		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			total = total + sum;
		
		a = b;
		b = sum;
	}
	printf("%.0f\n", total);
	return (0);
}
