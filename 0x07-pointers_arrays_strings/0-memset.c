#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: character
 * @b: constant byte
 * @n: number of bytes
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
		s[c] = b;

	return (s);
}
