#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: destination of concatenated strings
 *
 * @src: source of string to be concatenated
 *
 * Return: destination
 */

char *_strcat(char *dest, char *src)
{
	int c1 = 0, c2 = 0;

	while (*(dest + c1) != '\0')
	{
		c1++;
	}

	while (c2 >= 0)
	{
		*(dest + c1) = *(src + c2);
		if (*(src + c2) == '\0')
			break;
		c1++;
		c2++;
	}
	return (dest);
}
