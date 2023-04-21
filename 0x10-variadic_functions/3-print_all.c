#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *cha, *s = "";

	va_list l;

	va_start(l, format);


	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", s, va_arg(l, int));
					break;
				case 'i':
					printf("%s%d", s, va_arg(l, int));
					break;
				case 'f':
					printf("%s%f", s, va_arg(l, double));
					break;
				case 's':
					cha = va_arg(l, char *);
					if (!cha)
						cha = "(nil)";
					printf("%s%s", s, cha);
					break;
				default:
					i++;
					continue;
			}
			s = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(l);
}
