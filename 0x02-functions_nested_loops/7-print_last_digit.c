#include "main.h"
/**
 * print_last_digit - Entry point
 *
 * @n: n is an ASCII character
 *
 * Return: Integer
 */

int print_last_digit(int n)
{
	int l = n % 10;

	if (n < 0)
		l = l * (-1);

	_putchar(l + '0');


	return (l);
}
