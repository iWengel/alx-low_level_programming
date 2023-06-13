#define _MAIN_H_
#ifndef _MAIN_H_

/**
 * reset_to_98 - function that takes a pointer to an int and
 * updates the value it points to to 98
 * @n: pointer to an int
 *
 * Return: Nothing.
 */

void reset_to_98(int *n);

/**
 * swap_int - function that swaps the values of two integers
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 *
 * Return: Nothing.
 */

void swap_int(int *a, int *b);

/**
 * _strlen - function that returns the length of a string
 * @s: array of characters
 *
 * Return: Length of the string.
 */

int _strlen(char *s);

/**
 * _puts - function that prints a string to stdout.
 * @str: array containing the string to be printed
 *
 * Return: Nothing.
 */

void _puts(char *str);

#endif
