#include "main.h"
/**
 * print_diagonal - prints a diagonal line
 *@n: print int
 * Return: 0 after printing a diagonal line
 */
void print_diagonal(int n)
{

int i;
int b;

if (n > 0)
{
for (i = 0; i < n; i++)
{
for (b = 0; b < i; b++)
{
_putchar (' ');
}
_putchar (92);
_putchar ('\n');

}

}


else
{
_putchar ('\n');
}

}
