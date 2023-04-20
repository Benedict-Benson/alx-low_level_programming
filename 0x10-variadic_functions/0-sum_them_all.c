#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -  sum of all its parameters
 * @n: no of parameters passed to the function
 * @...: variables to calc sum
 *
 * Return: If n == 0, 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list digit;
	unsigned int a, sum = 0;

	va_start(digit, n);

	for (a = 0; a < n; a++)
		sum += va_arg(digit, int);

	va_end(digit);

	return (sum);
}
