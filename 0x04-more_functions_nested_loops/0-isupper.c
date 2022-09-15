#include "main.h"

/**
 * _isupper - Entry point
 *
 * Code that checks if an alphabet is uppercase
 * @c: character 
 * Return: 1 if uppercase or 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
