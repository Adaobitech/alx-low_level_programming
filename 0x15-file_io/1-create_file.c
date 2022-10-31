#include "main.h"

/**
 * create_file - Creates a file
 * @filename: Name of file to create
 * @text_content: NULL terminated string to write to
 * the file
 *
 * Return: 1 on sucees and -1 when fail
 * -1 if filename is NULL
 */

int create_file(const char *filename, char *text_content)
{
	int f;
	int n;
	int rwr;

	if (!filename)
		return (-1);

	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (f == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (n = 0; text_content[n]; n++)
		;

	rwr = write(f, text_content, n);

	if (rwr == -1)
		return (-1);

	close(f);

	return (1);
}
