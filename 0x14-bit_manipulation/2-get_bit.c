#include "main.h"
/**
 * get_bit - given index bit
 * @index: index
 * @n: n nth
 * Return: index value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
