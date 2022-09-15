#include "main.h"

/**
 * print_numbers - Entry point
 * Code to print number 0 to 9
 * Return: Nothing
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
