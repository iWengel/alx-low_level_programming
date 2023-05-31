#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: argument number
 *
 * Return: The last digit of the number.
 */

int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;

	return (n % 10);
}
