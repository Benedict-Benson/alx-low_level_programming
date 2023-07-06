#include <stdio.h>
#include "main.h"

/**
 * get_endianness - checks the endiannes
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *a;

	a = (char *)&i;

	return ((int)*a);
}


