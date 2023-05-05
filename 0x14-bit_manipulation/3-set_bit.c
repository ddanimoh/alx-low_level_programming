#include "main.h"
/**
 * @index: index
 * set_bit - set value functin
 * @n: nth value
 * Return: n
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n = (*n | (1 << index));	
	return (1);
}
