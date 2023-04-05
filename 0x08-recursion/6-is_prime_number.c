#include "main.h"

/**
 * is_prime_number - 1 if the input integer is
 * a prime number, otherwise return 0
 * @n: int
 *
 * Return: prime numbers
 */
int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	return (pnum(n, 2));
}

/**
 * pnum - real prime number
 * @n: int
 * @m: iterator
 *
 * Return: prime number
 */
int pnum(int n, int m)
{
	if (n == m)
		return (1);
	else if (n % m == 0)
		return (0);
	return (pnum(n, m + 1));
]
