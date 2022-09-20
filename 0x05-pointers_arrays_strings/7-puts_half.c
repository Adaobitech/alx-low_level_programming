#include "main.h"

/**
 * puts_half - prints the secondhalf of a string
 *
 * @str: String
 *
 * Return: Nothing
 */

void puts_half(char *str)
{
	int i;
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
			break;

		count++;
	}
	if (count % 2 == 1)
	{
		i = count / 2;
	}
	else
	{
		i = (count - 1) / 2;
	}

	for (i++; i < count; i++)
		_putchar(str[i]);
	_putchar('\n');
}
