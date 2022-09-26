#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: destination
 * @src: source
 * @n: amount of bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
		dest[c] = src[c];

	return (dest);
}
