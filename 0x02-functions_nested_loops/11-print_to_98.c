#include "main.h"
#include <stdio.h>
/**
 * print_to_98 -a function that prints all numbers between argument and 98
 * @n: the number to start from
 * Return: 0 after printing all numbers in between
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n < 98; n++)
			printf("%d, ", n);
			printf("%d\n", 98);		
	}
	else
	{
		for (n = n; n > 98; n--)
			printf("%d, ", n);
			printf("%d\n", 98);
	}
}
