#include "main.h"

/**
 * leet - encodes string into 1337
 * @s: String
 * Return: String
 */

char *leet(char *s)
{
	int c = 0, i;
	int lc[] = {97, 101, 111, 116, 108};
	int up[] = {65, 69, 79, 84, 76};
	int num[] = {52, 51, 48, 55, 49};

	while (*(s + c) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + c) == lc[i] || *(s + c) == up[i])
			{
				*(s + c) = num[i];
				break;
			}
		}
		c++;
	}
	return (s);
}
