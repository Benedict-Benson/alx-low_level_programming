#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - fn that reads a text file and prints it to the POSIX
 * @filename: pointer to file
 * @letters: data in file
 *
 * Return: success 1, error and null 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t a, b, c;
	char *fer;

	a = open(filename, O_RDONLY);
	if (a == -1)
		return (0);

	fer = malloc(sizeof(char) * letters);

	c = read(a, fer, letters);

	b = write(STDOUT_FILENO, fer, c);

	free(fer);
	close(a);
	return (b);
}
