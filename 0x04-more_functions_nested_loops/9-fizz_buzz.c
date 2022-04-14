#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 after completion
 */

int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if (((i % 5) == 0) && (i % 3) == 0)
		{
			printf("FizzBuzz ");
		}
		 if ((i % 3) == 0)
                {
                        printf("Fizz ");
                }
                else if ((i % 5) == 0)
                {
                        printf("Buzz ");
                }
		else
		{
			printf("%i ", i);
		}
	}
	printf("\n");
	return (0);
}
