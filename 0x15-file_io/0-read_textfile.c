#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX
 * @filename: file name
 * @letters: letters
 *
 * Reurn: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t a;
	char *ben;
	ssize_t wite;
	ssize_t m;

	a = open(filename, O_RDONLY);
	if (a == -1)
		return 0;
	ben = malloc(sizeof(char) *letters);
	m = read(a, ben, letters);
	wite = write(STDOUT_FILENO, ben, m);

	free(ben);
	close(a);
	return (wite);
}
