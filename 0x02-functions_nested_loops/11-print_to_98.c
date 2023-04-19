#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - funct name
 * Return: null
 */
void print_to_98(int n)
{
	if (n <= 0)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n < 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (n == 98)
				break;
		}
	}
	else if(n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n > 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (n == 98)
				break;
			n--;
		}
	}
	else
		printf("%d", n);
	_putchar('\n');
}
