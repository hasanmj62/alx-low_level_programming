#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reading the text file and make print to it to stdout
 * @filename: the pointer to file name
 * @letters: the number of letters that the function will read it and print
 *
 * Return: if function failed or NULL will read and print out.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (w);
}
