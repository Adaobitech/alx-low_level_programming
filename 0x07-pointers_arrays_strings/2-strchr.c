#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: String
 * @c: character
 * Return: *s, NULL if character not found
 */

char *_strchr(char *s, char c)
{
	int i;

	while (1)
	{
		i = *s++;
		if (i == c)
		{
			return (s - 1);
		}
		if (i == 0)
		{
			return (NULL);
		}
	}
}
