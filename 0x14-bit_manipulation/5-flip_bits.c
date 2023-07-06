#include <stdio.h>
#include "main.h"

/**
 * flip_bits - returns the number of bits to be flipped in n
 * @n: 1st No provided
 * @m: 2nd No provided
 * Return: No of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result != 0)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}

	return (count);
}
