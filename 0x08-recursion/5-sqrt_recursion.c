#include "main.h"

/**
 * _sqrt_recursion - square root recursion
 * @n: string
 *
 * Return: success
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_(n, 0));
}

/**
 * sqrt_ - recurses to find the natural
 * square root of a number
 * @n: number
 * @i: iterator
 *
 * Return: the resulting square root
 */
int sqrt_(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt_(n, i + 1));
}
