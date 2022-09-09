#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Code prints the alphabets in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;
	
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
		
	putchar('\n');

	return (0);
}
