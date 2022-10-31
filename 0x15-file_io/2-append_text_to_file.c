#include "main.h"

/**
 * append_text_to_file - appends text at the end of the file
 * @filename: Name of the file
 * @text_content: NULL terminated string to add to the
 * end of the file
 *
 * Return: 1 on success and -1 on failure
 * -1 if filename is NULL
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	int n;
	int rwr;

	if (!filename)
		return (-1);

	f = open(filename, O_WRONLY | O_APPEND);

	if (f == -1)
		return (-1);

	if (text_content)
	{
		for (n = 0; text_content[n]; n++)
			;

		rwr = write(f, text_content, n);

		if (rwr ==- -1)
			return (-1);
	}

	close(f);
	return (1);
}
