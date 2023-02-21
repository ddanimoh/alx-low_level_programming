#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	char c[] = "_putchar";

	for (i = 0; i < 8; i = i + 1)
		putchar(c[i]);
	putchar('\n');
	return (0);

}
