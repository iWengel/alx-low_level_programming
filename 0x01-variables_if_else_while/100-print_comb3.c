#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int i;
        int j;

        i = 48;
        while (i < 58)
        {
                j = 48;
                while (j < 58)
                {
                        if (i == 56 && j == 57)
                                break;
                        if (i < j)
                        {
                                putchar(i);
                                putchar(j);
                        }
                        putchar(',');
                        putchar(' ');
                        j++;
                }
                i++;
        }
        putchar('\n');
        return (0);
}

