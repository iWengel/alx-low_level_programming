#include <stdio.h>

/**
 * main - stores the address of variable into a pointer
 *
 * Return: Always (0).
 */

int main(void)
{
	int n;
	int *p;

	n = 98;
	p = &n;
	printf("Address of variable 'n': %p\n", &n);
	printf("Value of pointer 'p': %p\n", p);
	return (0);
}
