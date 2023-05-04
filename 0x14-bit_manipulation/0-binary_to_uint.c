#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string con binary no
 *
 * Return: converted No
 */
unsigned int binary_to_uint(const char *b)
{
	int a;

	unsigned int value = 0;

	if (!b)
		return (0);

	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);

		value = 2 * value + (b[a] - '0');
	}

	return (value);
}
