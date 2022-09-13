#include "main.h"
/**
 * main - check the code
 *
 * Code prints alohabet in lowercase
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);

	_putchar('\n');

	return;
}
