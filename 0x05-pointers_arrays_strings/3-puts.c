#include "main.h"

/**
 * _puts - Writes a function that prints a string
 *
 * @str: holds string
 *
 * Return: Void
 */

void _puts(char *str)
{
	int s = 0;

	while (str[s] != '\0')
	{
		_putchar(str[s]);
		s++;
	}
	_putchar('\n');
}
