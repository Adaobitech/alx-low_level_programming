#include "main.h"

/**
 * _sqrt_recursion - Prints the square root of a number
 * @n: integer
 * Return: Square root, -1 if not a natural sqaureroot
 */

int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return (n);
	return (_sqrt(n, 1));
}

/**
 * _sqrt - _sqrt_recursion
 * @n: integer
 * @i: integer
 * Return: sqrt
 */

int _sqrt(int n, int i)
{
	if (n < 0)
	{
		return (-1);
	}
	if ((i * i) > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (_sqrt(n, i + 1));
	}
}
