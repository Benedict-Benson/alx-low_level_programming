#include "main.h"

/**
 * create_file - create a fn that creates a file
 * @filename: pnty to created file
 * @text_content: ptr to string
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
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

	i = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	a = write(i, text_content, lenth);

	if (i == -1 || a == -1)
		return (-1);

	close(i);

	return (1);

}
