#include "main.h"

/**
 * rot13 - encodes a string using the rot13
 * @s: string to be encoded
 * Return: string encoded
 */

char *rot13(char *s)
{
	int c = 0, i;
	char alphabets[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + c) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + c) == alphabets[i];
					*(s + c) = rot13[i];
					break;
		}
		c++;
	}
	return (s);
}
