#include "main.h"

/**
 * print_line - Entry point
 * Code that print line
 * @n: value that prints line
 * Return: 0
 */

void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
