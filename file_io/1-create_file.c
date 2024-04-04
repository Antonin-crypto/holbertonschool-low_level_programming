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
	ssize_t file;

	if (!filename)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		text_content = "";
	}

	file = creat(filename, 0600);

	if (file == -1)
	{
		return (-1);
	}
	write(file, text_content, strlen(text_content));

	return (1);
}
