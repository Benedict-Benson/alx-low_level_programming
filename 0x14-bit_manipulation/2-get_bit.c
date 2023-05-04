#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: No to search
 * @index: index of No
 *
 * Return: value of index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >=(sizeof(unsigned int long) * 8))
	{
		return (-1);
	}

	if ((n & (1 <<index)) == 0)
	{
		return (0);
	}

	return (1);
}
