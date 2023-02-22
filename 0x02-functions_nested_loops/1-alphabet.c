#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints the english alphabet from a-z.
 * Return: Nothing.
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
