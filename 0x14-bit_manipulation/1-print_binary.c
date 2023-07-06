#include <stdio.h>
#include "main.h"
/**
 * print_binary - fn that prints binary No
 * @n: integer
 * Return: Binary No
 */
void print_binary(unsigned long int n)
{
	int No;
	static int count;

	if (n == 0 && count > 0)
		return;
	else if (n == 0)
	{
		putchar('0');
		return;
	}

	No = (n & 1);
	count++;

	print_binary(n >>= 1);
	
	putchar('0' + No);
}

