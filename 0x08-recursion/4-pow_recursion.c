#include "main.h"

/**
 * _pow_recursion - prints x raised to the power of y
 * @x: integer
 * @y: integer
 * Return: integer, if y is less than 0, return -1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
