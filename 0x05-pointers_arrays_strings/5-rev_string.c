#include "main.h"

/**
 * rev_string - reverses string
 * @s: holds a string
 * Return: void
 */

void rev_string(char *s)
{
	int i, a, b;
	char x, y;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	a = i - 1;
	b = a / 2;
	while (b >= 0)
	{
		x = s[a - b];
		y = s[b];
		s[b] = x;
		s[a - b] = y;
		b--;
	}
}
