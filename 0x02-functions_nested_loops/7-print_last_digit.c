#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - prints the last digit of a number
 * @n: contains the value of the number to go through the function
 * Return: the last digit of the number
 */
int print_last_digit(int n)
{
	int last_digit;
	
	if (n < 0)
	{
		last_digit = (-1 * (n % 10));
		_putchar(last_digit);
		return (last_digit);
	}
	else
	{
		last_digit = (n % 10);
		_putchar(last_digit);
		return (last_digit);
	}
}
