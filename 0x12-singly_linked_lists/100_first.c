#include <stdio.h>

/**
 * bmain - function executed before the main function
 * Return: nothing.
 */
void __before_main__((constructor)) bmain()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
