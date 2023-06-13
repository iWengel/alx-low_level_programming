#include <stdio.h>

/**
 * main - deferencing pointers
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;
	int *p;

	n = 98;
	p = &n;
	printf("Value of 'n': %d\n", n);
	printf("Address of 'n': %p\n", &n);
	printf("Value of pointer 'p': %p\n", p);
	*p = 402;
	printf("After deferencing Value of 'n': %d\n", n);
	return (0);
}
