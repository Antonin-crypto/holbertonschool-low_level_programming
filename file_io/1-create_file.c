#include "main.h"
/**
 * create_file - Create a file object
 *
 * @filename: file name to open
 * @text_content: text content to put in the file
 * Return: 1 success
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t length = 0;

	if (!filename)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (text_content == NULL)
	{
		text_content = "";
	}

	while (text_content[length] != '\0')
	{
		length++;
	}

	if (fd == -1)
	{
		return (-1);
	}

	if (write(fd, text_content, length) == -1)
	{
		return (-1);
	}

	close(fd);
	return (1);
}
