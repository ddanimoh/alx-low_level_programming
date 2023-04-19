#include <stdio.h>
#include "main.h"

/**
 * swap_int - check the code
 * @a: is a pointer
 * @b: is also a pointer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int x = *b;
	*b = *a;
	*a = x;
}
