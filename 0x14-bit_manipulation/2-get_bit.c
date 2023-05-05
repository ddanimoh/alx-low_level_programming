#include "main.h"
/**
 * get_bit - func that index values a bit
 * @n: char of values
 * @index: number 
 * Return: index vlue
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int b;

	b = n >> index;

	if (index > 32)
	{
		return (-1);
	}

	return (b & 1);
}
