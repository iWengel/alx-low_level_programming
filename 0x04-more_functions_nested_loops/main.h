#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * _putchar - prints a single character on stdout
 * @c: argument character
 *
 * Return: 0
 */

int _putchar(char c);

/**
 * _isupper - function that checks for an uppercase character
 * @c: ASCII value of argument character
 *
 * Return: 1 if uppercase; 0 otherwise
 */

int _isupper(int c);

/**
 * _isdigit - function that checks for a digit
 * @c: ASCII value of argument character
 *
 * Return: 1 if c is digit; 0 otherwise
 */

int _isdigit(int c);

/**
 * mul - function that multiplies two integers
 * @a: integer 1
 * @b: integer 2
 *
 * Return: The product of the integers
 */

int mul(int a, int b);

/**
 * print_numbers - function that prints numbers
 *
 * Return: Nothing
 */

void print_numbers(void);

/**
 * print_most_numbers - function that prints numbers except some
 *
 * Return: Nothing
 */

void print_most_numbers(void);

/**
 * more_numbers - function that prints 10 times the numbers 0-14
 *
 * Return: Nothing
 */

void more_numbers(void);

/**
 * print_line - function that drawa a straight line in the terminal
 * @n: integer indicating the number of times the character
 * '_' should be printed
 *
 * Return: Nothing
 */

void print_line(int n);

#endif
