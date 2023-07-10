#include "main.h"

/**
 * create_file - a fn that creates a file
 * @filename: name of file
 * @text_content: content
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int a, write_file, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	a = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (a == -1)
		return (-1);

	if (length > 0)
	{
		write_file = write(a, text_content, length);

		if (write_file - 1)
		{
			close(a);
			return (-1);
		}


	}

	close(a);

	return (1);
}
