#include "main.h"
/**
 * flip_bits - number of bit to flip to another
 * @n: argu 1
 * @m: argu 2
 * Return: m Values
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned  int increase;
	unsigned long int s;

	s = n ^ m;
	increase = 0;

	while (s != 0)
	{
		increase += 1;
		s &= (s - 1);
	}
	return (increase);
}
