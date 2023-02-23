#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - to print alphabet x10
 *
 * Return: has no return, is void
 */
void print_alphabet_x10(void)
{
	int i  = 0;
	char c = 'a';

	while (i < 10)
	{
		while (c <= 'z')
		{
			putchar(c);
			c++;
		}
		putchar('\n');
		i++;
	}
}
