#include "main.h"

/**
 * print_square - Entry point
 * Code that draws square
 * @size: length and breadth of square
 * Return: Void
 */

void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 0, i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
