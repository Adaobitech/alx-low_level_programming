#include "main.h"

/**
 * string_toupper - changes string to uppercase
 * @s: string
 * Return: string in capital
 */

char *string_toupper(char *s)
{
	int ch;

	for (ch = 0; *(s + ch) != '\0'; ch++)
	{
		if ((*(s + ch) >= 97) && (*(s + ch) <= 122))
			*(s + ch) = *(s + ch) - 32;
	}
	return (s);
}
