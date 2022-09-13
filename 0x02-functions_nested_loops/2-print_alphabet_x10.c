#include "main.h"
/**
 * print_alphabet_x10 - Checks the code
 *
 * Code that prints alphabets 10times
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	char ch;
	int i;
	
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		for ( i = 0; i <= 10; i++)
		{
			_putchar(i);
		}
		_putchar(ch);
	}
}
