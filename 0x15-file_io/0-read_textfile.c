#include "main.h"

/**
 * read_textfile - reads a text file and prints it to
 * POSIX Stdout
 * @filename: Name of file
 * @letters: Number of letters to be read and printed
 *
 * Return: Actual number of letters read
 * Return 0 if file cannot be read or opened
 * if filename is NULL, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	f = open(filename, O_RDONLY);

	if (f == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(f, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(f);

	free(buf);

	return (nwr);
}
