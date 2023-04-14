#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX std output
 * @filename: file to read
 * @letters: number of letters to print.
 *
 * Return: number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t wwrite, sz;
	char *buf;

	if (!filename)
		return (0);

	file_descriptor = open(filename, O_RDONLY);

	if (file_descriptor == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);

	if (!buf)
		return (0);
	/* read the file */
	sz = read(file_descriptor, buf, letters);
	buf[sz] = '\0';

	/* write to stdout */
	wwrite = write(STDOUT_FILENO, buf, sz);
	/* close file */
	close(file_descriptor);

	free(buf);

	return (wwrite);
}
