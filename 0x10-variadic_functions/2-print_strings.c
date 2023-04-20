#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints string
 * @separator: string to be printed btwn string
 * @n: no of strings passed to the function
 * @...: a variable no of strings to print
 *
 * Description: If separator is NULL, it is not printed.
 *		If one of the strings if NULL, (nil) is printed instead.
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	char *stn;
	unsigned int a;

	va_start(string, n);

	for (a = 0; a < n; a++)
	{
		stn = va_arg(string, char *);

		if (stn == NULL)
			printf("(nill)");

		else
			printf("%s", stn);

		if (a != (n - 1) && separator != NULL)
			printf("%s", separator);

	}

	printf("\n");

	va_end(string);
}

