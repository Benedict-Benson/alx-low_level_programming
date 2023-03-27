#include "main.h"

/**
 * swap_int - Swaps the value of 2 integers
 * @a: input
 * @b: input
 *
 * Return: a b.
 */
void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;

}

