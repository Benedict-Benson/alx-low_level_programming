#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes char c in stdout
 * @c: char to print
 *
 * Return: 1 on success
 * if erro, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
