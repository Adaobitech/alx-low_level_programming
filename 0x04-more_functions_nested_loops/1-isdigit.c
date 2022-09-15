#include "main.h"
/**
 * _isdigit - Entry point
 * Code to check for a digit
 * @c: c is a character
 * Return: 1 if digit or 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
