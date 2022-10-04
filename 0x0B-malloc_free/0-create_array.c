#include "main.h"
#include <stdlib.h>

/**
 * create_array -  creates an array of chars
 * @size: size of the array
 * @c: char
 * Return: Null if size is 0, character if success
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ch;

	if (size == 0)
		return (NULL);

	ch = malloc(sizeof(c) * size);

	if (ch == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ch[i] = c;

	return (ch);
}
