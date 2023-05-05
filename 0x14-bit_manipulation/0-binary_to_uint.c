#include "main.h"
/**
 * binary_to_uint - funt to decimal
 * @b: point to char values
 * Return: decimal
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int y;
	int x;

	y = 0;

	if (*b == '\0')
	{
		return (0);
	}
	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] == '0' || b[x] == '1')
		{
			y = (y << 1 ) | (b[x] - '0');
		}
		else
		{
			return (0);
		}
	}
	return (y);
}
