#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Code that prints smallest combination of three digits
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int a, b, c;

	for (a = 48; a < 58; a++)
	{
		for (b = 49; b < 58; b++)
		{
			for (c = 50; c < 58; c++)
			{
				if (a < b && b < c)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a != 55)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
