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
			int i;

			if (n > 99)
			{
				i = n % 10;

				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
				_putchar((n % 10) + '0');
			}
			else
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			if(n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (; n <= 98; n++)
		{
			if (n >= 0)
			{
				if (n >= 0 && n < 10)
				{
					_putchar((n % 10) + '0');
				}
				else
				{
					_putchar((n / 10) + '0');
					_putchar((n % 10) + '0');
				}
			}
			else
			{
				if (n < 0)
					_putchar('-');
				if (n < 0 && n < -9)
				{
					n = -n;
					_putchar((n / 10) + 0);
					_putchar((n % 10) + 0);

				}
				else
				{
					n = -n;
					_putchar((n % 10) + 0);
				}
				if (n != 98)
				{
					_putchar(',');
					_putchar(' ');
				}
			}

		}
	}
}
