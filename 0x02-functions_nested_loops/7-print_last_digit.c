#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *@n: number being tested
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	
n = n >= 0 ? n : n * -1;
int last = n % 10;
_putchar('0' + last);

return (last);
}
