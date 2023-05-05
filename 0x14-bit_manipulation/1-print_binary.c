#include "main.h"
/**
 * print_binary - funct to print binary
 * @a: Num to convert
 * Return: binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int p;
	int x, y = 0;

	for (x = 63; x >= 0; x--)
	{
		p = n >> x;

		if (p & 1)
		{
			_putchar('1');
			y = y + 1;
		}
		else if (y)
		{
			_putchar('0');
		}
	}
	if (!y)
		_putchar('0');
}
