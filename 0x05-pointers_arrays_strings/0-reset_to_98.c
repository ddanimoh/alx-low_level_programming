#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
        int n;

        n = 402;

        printf("n=%d\n", n);
        reset_to_98(&n);
        printf("n=%d\n", n);

        return (0);
}


/**
 * reset_to_98 - To take a pointer
 *@n: is the point to change value
 * Return: 0
 */
void reset_to_98(int *n)
{
	*n = 98;
}
