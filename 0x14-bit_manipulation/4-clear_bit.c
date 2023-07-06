#include <stdio.h>
#include "main.h"

/**
 * clear_bit - a fn that sets the value of a bit to o
 * @n: integer
 * @index: pst of bit
 * Return: on succes 1 on error -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	mask <<= index;

	*n &= ~mask;

	return (1);
}
