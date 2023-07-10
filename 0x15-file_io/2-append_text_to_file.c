#include "main.h"

/**
 * append_text_to_file -  appends text at the end of a file.
 * @filename: name of file
 * @text_content: text content
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int app, w_file, length = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	app = open(filename, O_WRONLY | O_APPEND);

	w_file = write(app, text_content, length);

	if (app == -1 || w_file == -1)
		return (-1);

	close(app);

	return (1);
}
