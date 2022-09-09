#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Code that prints alphabets in lowercase and uppercase
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char lc; /* lowercase*/
	char uc; /*uppercase*/

	for (lc = 'a'; lc <= 'z'; lc++)
		putchar(lc);
	for (uc = 'A'; uc <= 'Z'; uc++)
	       putchar(uc);

	putchar('\n');
	return (0);
}
