#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers -  prints numbers
 * @separator: string to be printed between no
 * @n: number of integers passed to the fn
 * @...: variable number of numbers to print
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int a;

	va_start(num, n);

	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(num, int));


		if (a != (n - 1) && separator != NULL)
			printf("%s", separator);

	}

	printf("\n");

	va_end(num);
}
