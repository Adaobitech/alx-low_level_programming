#include "main.h"
/**
 * main -Entry point
 *
 * code prints _puchar
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char ch[9] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(ch[i]);
	}

	_putchar('\n');

	return (0);
}
