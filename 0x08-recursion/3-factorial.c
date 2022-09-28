#include "main.h"

/**
 * factorial - factorial of a given number
 * @n: Number
 * Return: Factorial, if n is less than 0 return -1
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
