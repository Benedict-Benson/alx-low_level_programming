#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void close_file(int fd);
char *create_buffer(char *file);

/**
 * create_buffer - Space 1024 bytes for a buffer
 * @file: name of file storing chars
 *
 * Return: a ptr to new allocated buffer
 */
char *create_buffer(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buff);
}

/**
 * close_file - clloses file desc
 * @fd: file descriptor to be closed
 */
void close_file(int fd)
{
	int hm = close(fd);

	if (hm == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - cp content of a file to another file
 * @argc: No of arg supplied to the program
 * @argv: array ofptr to the arrg
 *
 * Return: on success 0
 * Description: If the argument count is incorrect - exit code 97.
 *              If file_from does not exist or cannot be read - exit code 98.
 *              If file_to cannot be created or written to - exit code 99.
 *              If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int a, b, r_file, w_file;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = create_buffer(argv[2]);
	a = open(argv[1], O_RDONLY);
	r_file = read(a, buff, 1024);

	b = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (a == -1 || r_file == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}
		w_file = write(a, buff, r_file);
		if (b == -1 || w_file == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		r_file = read(a, buff, 1024);
		b = open(argv[2], O_WRONLY | O_APPEND);
	} while (r_file > 0);

	free(buff);
	close_file(a);
	close_file(b);

	return (0);
}






















