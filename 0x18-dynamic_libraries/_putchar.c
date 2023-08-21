#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints the char c to stdout
 * @c: Character being printed
 *
 * Return: 1 Shows success
 * On error, -1 is returned also errno is set properly.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
