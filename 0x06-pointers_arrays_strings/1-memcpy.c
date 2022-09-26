#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: Destination
 * @src: source
 * @n: number of byte
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n, c++)
		dest[c] = src[c];
	return (dest);
}
