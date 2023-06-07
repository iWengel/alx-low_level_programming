#include <stdio.h>
#define LARGEST 10000000000

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: 0 (Success)
 */

int main(void)
{
	unsigned long int i1 = 0, j1 = 1, i2 = 0, j2 = 2;
	unsigned long int x, y, z;
	int count;

	printf("%lu, %lu, ", j1, j2);
	for (count = 2; count < 98; count++)
	{
		if (j1 + j2 > LARGEST || i2 > 0 || i1 > 0)
		{
			x = (j1 + j2) / LARGEST;
			y = (j1 + j2) % LARGEST;
			z = i1 + i2 + x;
			i1 = i2, i2 = z;
			j1 = j2, j2 = y;
			printf("%lu%010lu", i2, j2);
		}
		else
		{
			y = j1 + j2;
			j1 = j2, j2 = y;
			printf("%lu", j2);
		}
		if (count != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
