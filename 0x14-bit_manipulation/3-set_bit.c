#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets value of bit to 1 at a given index
 * @n: integer
 * @index: bit position
 * Return: on success 1 on error -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);

	return (1);
}

