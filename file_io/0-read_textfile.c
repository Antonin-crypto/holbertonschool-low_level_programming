#include "main.h"
/**
 * read_textfile - reads a text file and prints it
 *
 * @filename: name of file
 * @letters: size of text
 * Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t let, file, w;
	char *txt;

	txt = malloc(letters);
	if (txt == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(txt);
		return (0);
	}

	let = read(file, txt, letters);

	w = write(STDOUT_FILENO, txt, let);

	close(file);

	return (w);
}
