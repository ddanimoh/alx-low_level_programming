#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *@i: number being tested
 * Return: Always 0.
 */
int print_last_digit(int i)
{
	int f;

	if (i < 0)
		i = -i;
	f = i % 10;
	if (f < 0)
		f = -f;

	_putchar(f + '0');
	return (f);
}
