#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - function is void
 *
 * Return nothing
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
}
