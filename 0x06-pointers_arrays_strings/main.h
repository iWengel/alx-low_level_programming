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

#endif
