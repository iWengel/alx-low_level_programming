#include <unistd.h>
/**
 * main - entry point
 * Read the argument
 * Return: 1 after printing the argument to the standard error
 */
int main(void)
{
	char str1[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

        write(2, str1, 59);
        return (1);
}
