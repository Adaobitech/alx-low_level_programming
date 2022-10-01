#include "main.h"
/**
 * _abs - Entry point
 *
 * Code that computes the absolute value of an integer
 *
 *@n: n is an ASCII character
 *
 * Return: integer
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return ((-1) * n);
	}
	else
	{
		return (n);
	}
}
