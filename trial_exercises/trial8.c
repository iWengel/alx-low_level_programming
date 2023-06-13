#include <stdio.h>

/**
 * modif_my_char_var - changes my character value to 'o'
 *
 * Return: Nothing
 */

void modif_my_char_var(char *cc, char ccc)
{
	*cc = 'o';
	ccc = 'l';
}

/**
 * main - changes the value in an address containing a character
 *
 * Return: Always 0.
 */

int main(void)
{
	char c;
	char *p;

	p = &c;
	c = 'H';
	printf("Address of char 'c': %p\n", &c);
	printf("Value of pointer 'p': %p\n", p);
	printf("Address of pointer 'p': %p\n", &p);
	printf("Value of char 'c' before call: %d ('%c')\n", c, c);
	modif_my_char_var(p, c);
	printf("Value of char 'c' after call: %d ('%c')\n", c, c);
	printf("Value of pointer 'p' after call: %p\n", p);
	return (0);
}
