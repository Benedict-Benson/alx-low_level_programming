#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buf(char *file);
void close_file(int a);

/**
 * create_buf - allocate 1024 bytes for buffer
 * @file: name of file buffer strng char
 *
 * Return: ptr to new malloc
 */
char *create_buf(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: can't write to %s\n", file);
		exit(99);
	}
	return (buf);
}

/**
 * close_file - close file desp
 * @a: file desp to be closed
 */
void close_file(int a)
{
	int z;

	z = close(a);

	if (z == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close a %d\n", a);
		exit(100);
	}
}
/**
 * main - cp content of a file to another fle
 * @argc: No of arg supplied to program
 * @argv: an Array of pointer to arg
 *
 * Return: on success 0
 * Description: If the argument count is incorrect - exit code 97
 * If file_from does not exist or cannot be read - exit code 98
 * If file_to cannot be created or written to - exit code 99
 * If file_to or file_from cannot be closed - exit code 100
 */
int main(int argc, char *argv[])
{
	int from, to, m, s;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "usage: cp file_from file_to\n");
		exit(97);
	}

	buf = create_buf(argv[2]);
	from = open(argv[1], O_RDONLY);
	m = read(from, buf, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || m == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}
		s = write(to, buf, m);
		if (to == -1 || s == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(99);
		}

		m = read(from, buf, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (m > 0);

	free(buf);
	close_file(from);
	close_file(to);

	return (0);
}

