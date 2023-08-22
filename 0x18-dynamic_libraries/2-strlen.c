#include "main.h"

/**
 * _strlen - length of a string
 * @s: string
 *
 * Return: s
 */
int _strlen(char *s)
{
	int text = 0;

	while (*s != '\0')
	{
		text++;
		s++;
	}

	return (text);
}
