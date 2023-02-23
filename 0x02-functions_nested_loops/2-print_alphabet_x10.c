#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - to print alphabet x10
 *
 * Return: has no return, is void
 */
void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i = i + 1)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			putchar(c);
		}
		putchar('\n');
	}

}
