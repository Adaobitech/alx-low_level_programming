#include "main.h"
/**
 * cap_string - Capitalizes all words of a string
 * @s: string
 * Return: Capitalized String
 */

char *cap_string(char *s)
{
	int ch, i;
	int sw[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + ch) >= 97 && *(s + ch) <= 122)
		*(s + ch) = *(s + ch) - 32;
	ch++;
	while (*(s + ch) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(s + ch) == sw[i])
			{
				if ((*(s + (ch + 1)) >= 97) && (*(s + (ch + 1)) <= 122))
					*(s + (ch + 1)) = *(s + (ch + 1)) - 32;
				break;
			}
		}
		ch++;

	}
	return (s);
}
