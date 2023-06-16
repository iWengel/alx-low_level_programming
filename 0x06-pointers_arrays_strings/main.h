#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * _putchar - prints a character to stdout
 * @c: character to be printed
 *
 * Return: Always 0.
 */

int _putchar(char c);

/**
 * *_strcat - concatenates two strings
 * @dest: first part of the string
 * @src: second part of the string
 *
 * Return: pointer to the concatenated string
 */

char *_strcat(char *dest, char *src);

/**
 * *_strncat - concatenates two strings using at most n
 * bytes from the appended string
 * @dest: first part of the string
 * @src: second part of the string
 * @n: number specifying the index of the character in the
 * second string upto which is to be appended
 *
 * Return: pointer to the concatenated string
 */

char *_strncat(char *dest, char *src, int n);

/**
 * *_strncpy - copies a string
 * @dest: copy destination string
 * @src: string containing characters to be copied
 * @n: number specifying the index of the character up to which
 * the string is to be copied
 *
 * Return: pointer to the modified(copied) string
 */

char *_strncpy(char *dest, char *src, int n);

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 0 if strings are equal, otherwise if not
 */

int _strcmp(char *s1, char *s2);

/**
 * reverse_array - reverses the content of an array of integers
 * @a: The array of integers
 * @n: Number of elements in the array
 *
 * Return: Nothing.
 */

void reverse_array(int *a, int n);

/**
 * *string_toupper - changes all lowercase letters of a string to uppercase
 *
 * Return: pointer to the changed string
 */

char *string_toupper(char *);

/**
 * *cap_string - capitalizes all words in a string
 *
 * Return: pointer to the capitalized string
 */

char *cap_string(char *);

/**
 * *leet - encodes a string into 1337
 *
 * Return: pointer to the encoded string
 */

char *leet(char *);

/**
 * *rot13 - encodes a string using rot13
 *
 * Return: pointer to the encoded string
 */

char *rot13(char *);

#endif
