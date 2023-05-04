#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 * @n: number
 * @m: No to flip n on
 *
 * Return: No of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int ex = n ^ m;
	unsigned long int bit = 0;

	while (ex > 0)
	{
		bit += (ex & 1);
		ex >>= 1;
	}
	return (bit);

}
