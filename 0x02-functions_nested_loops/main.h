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
 * print_alphabet - prints the alphabet to stdout
 *
 * Return: Nothing.
 */

void print_alphabet(void);

/**
 * print_alphabet_x10 - prints the alphabet 10 times to stdout
 *
 * Return: Nothing.
 */

void print_alphabet_x10(void);

/**
 * _islower - checks for lowercase character
 * @c: argument character
 *
 * Return: 1 if character is lowercase, 0 if not.
 */

int _islower(int c);

/**
 * _isalpha - checks for alphabetic character
 * @c: argument character
 *
 * Return: 1 if alphabetic, 0 if not.
 */

int _isalpha(int c);

/**
 * print_sign - prints the sign of a number
 * @n: argument number
 *
 * Return: 1 if number > 0, 0 if number = 0, -1 if number < 0.
 */

int print_sign(int n);

/**
 * _abs - computes the absolute value of an integer
 *
 * Return: The absolute value of argumment integer.
 */

int _abs(int);

/**
 * print_last_digit - prints the last digit of a number
 *
 * Return: The last digit of the number.
 */

int print_last_digit(int);

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: Nothing.
 */

void jack_bauer(void);

/**
 * times_table - prints the 9 times table
 *
 * Return - Nothing.
 */

void times_table(void);

#endif
