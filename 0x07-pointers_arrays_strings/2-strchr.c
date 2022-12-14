#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: String
 * @c: character
 * Return: *s, NULL if character not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
