#include "main.h"
/**
 * set_bit - set bit
 * @n: point to num
 * @index: index of n
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	if (index > sizeof(n) * 8)
	{
		return (-1);
	}
	x = 1 << index;
	*n = (*n | x);

	return (1);
}
