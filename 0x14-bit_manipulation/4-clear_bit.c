#include "main.h"
/**
 * clear_bit - clearin set bit @ 0 index
 * @n: pointer of char of value
 * @index: index
 * Return: index value
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n &= ~(1UL << index);
	return (1);
}
