#include <unistd.h>

/**
 * _putchar - writes char c to stdout
 * @c: the char to print
 * Return: on succes 1 error -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

