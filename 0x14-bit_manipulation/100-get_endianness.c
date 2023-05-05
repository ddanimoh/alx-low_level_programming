#include "main.h"
/**
 * get_endianness - Function
 * Return: 1 or 0;
 */
int get_endianness(void)
{
	int s = 1;
	char *x = (char *)&s;

	if (*x == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
