#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - funct name
 * Return: null
 * @n: argument
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);

			if(n < 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else if (n < 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);

			if (n < 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
