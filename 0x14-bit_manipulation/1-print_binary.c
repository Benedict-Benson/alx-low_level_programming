#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: No to print inbinary
 *
 */
void print_binary(unsigned long int n)
{
	int a, num = 0;
	unsigned long int log;

	for (a = 63; a >= 0; a--)
	{
		log = n >> a;

		if (log & 1)
		{
			_putchar('1');
			num++;
		}

		else if (num)
			_putchar('0');
	}
	if (!num)
		_putchar('0');
}
