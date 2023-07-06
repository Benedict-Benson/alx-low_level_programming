#include <stdio.h>
#include  "main.h"

/**
 * get_bit - returns value of a bit at a given index
 * @n: integer
 * @index: position
 * Return: bit at index index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	i = (n >> index) & 1;

	return (i);
}
