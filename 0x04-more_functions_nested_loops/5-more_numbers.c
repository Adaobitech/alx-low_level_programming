#include "main.h"

/**
 * more_numbers - Entry point
 * code to print 10 times numbers from 0 to 14
 * Return: Void
 */

void more_numbers(void)
{
	int i;
	char j;

	i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j >= 14)
		{
			if (j >= 10)
				_putchar((j / 10) + 48);
			_putchar((j % 10) + 48);
			j++;
		}
		_putchar('\n');
			i++;
	}
}
