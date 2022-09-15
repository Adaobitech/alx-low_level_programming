#include "main.h"

/**
 * more_numbers - Entry point
 * code to print 10 times numbers from 0 to 14
 * Return: Void
 */

void more_numbers(void)
{
	int i;
	int j;

	i = 0;
	while (i <= 57)
	{
		j = 0;
		while (j >= '14')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
			i++;
	}
}
