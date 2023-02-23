#include "main.h"
#include <stdio.h>

/**
 * _islower - functions today
 *
 * @c: c to take int valus
 *
 * Return: nothing
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
