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

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: integer indicating the number of times the character '\'
 * should be printed
 *
 * Return: Nothing
 */

void print_diagonal(int n);

/**
 * print_square - function that prints a square
 * @size: size of the square
 *
 * Return: Nothing
 */

void print_square(int size);

/**
 * print_triangle - function that prints a triangle
 * @size: size of the triangle
 *
 * Return: Nothing
 */

void print_triangle(int size);

/**
 * print_number - function that prints an integer
 * @n: argument number to be printed
 *
 * Return: Nothing
 */

void print_number(int n);

#endif
