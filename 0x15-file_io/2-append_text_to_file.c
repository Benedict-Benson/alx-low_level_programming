#include "main.h"

/**
 * append_text_to_file - fn that appends text at the end of a file
 * @filename: pointer to fine name
 * @text_content: pointer to file content
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0;
	int a = 0;
	int lenth = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lenth = 0; text_content[lenth];)
			lenth++;
	}

	i = open(filename, O_WRONLY | O_APPEND);
	a = write(i, text_content, lenth);

	if (i == -1 || a == -1)

		return (-1);

	return (1);
}
