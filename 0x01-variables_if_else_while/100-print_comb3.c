#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Code that prints combinations of two digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 0; n < 100; n++)
	{
		putchar((d / 10) + '0');
		putchar((d % 10) + '0');
		if (d != 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
