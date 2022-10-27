#include "main.h"

/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: binary number
 *
 * Return: unsigned int, or 0 if
 * b is not 0 or 1, b is null
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int u;
	int len, base;

	u = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, base = 1; len >= 0; len--, base *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			u += base;
		}
	}

	return (u);
}
