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

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar((j / 10) + 48);
			_putchar((j % 10) + 48);
		}
		_putchar('\n');
	}
}
