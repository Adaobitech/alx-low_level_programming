#include "main.h"

/**
 * print_number - Prints integer
 * @n: Integer
 */

void print_number(int n)
{
	unsigned int c, d, i;

	if (n < 0)
	{
		_putchar(45);
		c = n * -1;
	}
	else
	{
		c = n;
	}

	d = c;
	i = 1;

	while (d > 9)
	{
		d /= 10;
		i *= 10;
	}

	for (; i >= 1; i /= 10)
	{
		_putchar(((c / i) % 10) + 48);
	}
}
