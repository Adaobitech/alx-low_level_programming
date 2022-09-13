#include "main.h"
/**
 *_islower - Entry point
 *
 *@c: c is an ASCII character
 *
 * Code checks if a character is lowercase
 *
 * Return: Always 0
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
