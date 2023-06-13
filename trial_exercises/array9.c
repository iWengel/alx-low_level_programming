#include <stdio.h>

/**
 * main - array deference, address and type decay
 *
 * Return: Always 0.
 */

int main(void)
{
        int a[5];
        int *p;
        int *p2;

        *a = 98;
        *(a + 1) = 198;
        *(a + 2) = 298;
        a[3] = 398;
        *(a + 4) = 498;
        printf("Value of a[0]/*a: %d\n", *a);
        printf("Address of a[0]: %p\n", &a[0]);
        printf("Address of a[0]: %p\n", a);
        printf("Address of a[0]: %p\n", &(*a));
        printf("Value of a[1]/*(a + 1): %d\n", *(a + 1));
        printf("Value of a[1]/*(a + 1): %d\n", a[1]);
        printf("Address of a[1]: %p\n", a + 1);
        printf("Value of a[2]/*(a + 2): %d\n", *(a + 2));
        printf("Value of a[2]/*(a + 2): %d\n", a[2]);
        printf("Address of a[2]: %p\n", a + 2);
        printf("Value of a[3]/*(a + 3): %d\n", *(a + 3));
        printf("Value of a[3]/*(a + 3): %d\n", a[3]);
	printf("Address of a[3]: %p\n", a + 3);
	printf("Value of a[4]/*(a + 4): %d\n", *(a + 4));
        printf("Value of a[4]/*(a + 4): %d\n", a[4]);
        printf("Address of a[4]: %p\n", a + 4);
	printf("Address of p before expression: %p\n", p);
	printf("Address of p2 before expression: %p\n", p2);
	p = a + 1;
	printf("Address of p after expression: %p\n", p);
        printf("Address of a[1]/*(a + 1) after expression: %p\n", a + 1);
	*p = 98;
	printf("Value of a[1]/*(a + 1) after deference: %d or %d or %d\n", *p, *(a + 1), a[1]);
	p2 = a + 3;
	printf("Address of p2 after expression: %p\n", p2);
        printf("Address of a[3]/*(a + 3) after expression: %p\n", a + 3);
        *p2 = *p + 1337;
        printf("Value of a[3]/*(a + 3) after deference: %d or %d or %d\n", *p2, *(a + 3), a[3]);
        return (0);
}
