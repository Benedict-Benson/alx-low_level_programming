#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10x
 *
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{	char alp;
	int i;

	i = 0;

	while (i < 10)
	{
		alp = 'a';
		while (alp <= 'z')
		{
			_putchar(alp);
			alp++;
		}
		_putchar('\n');
		i++;
	}
}

