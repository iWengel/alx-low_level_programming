#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * _putchar - writes the character c to stdout
 * @c: The character to be printed
 *
 * Return: 1 (Success)
 */

int _putchar(char c);

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

/**
 * print_rev - function that prints a string in reverse
 * @s: pointer to the string to be reversed
 *
 * Return: Nothing.
 */

void print_rev(char *s);

/**
 * rev_string - function that reverses a string
 * @s: pointer to the string to be reversed
 *
 * Return: Nothing.
 */

void rev_string(char *s);

/**
 * puts2 - function that prints every other character of a string
 * starting with the first character, followed by a new line.
 * @str: pointer to the argument string
 *
 * Return: Nothing.
 */

void puts2(char *str);

/**
 * puts_half - function that prints half of a string
 * @str: pointer to the argument string
 *
 * Return: Nothing.
 */

void puts_half(char *str);

/**
 * print_array - function that prints 'n' elements of an array of ints
 * @a: pointer to the array
 * @n: the number of integers to be printed
 *
 * Return: Nothing
 */

void print_array(int *a, int n);

/**
 * *_strcpy - function that copies the string pointed to by src, to the
 * buffer pointed by dest.
 * @src: pointer pointing to the source of the string
 * @dest: pointer pointing to the destination of the string
 *
 * Return: The string.
 */

char *_strcpy(char *dest, char *src);

/**
 * _atoi - function that converts a string to an integer
 * @s: argument string
 *
 * Return: interger value of string
 */

int _atoi(char *s);


#endif
