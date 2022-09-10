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
	int i;

	n = 48;
	i = 48;

	while (i < 58)
	{
		n = 48;
	       while (n < 58)
	       {
		       if (i != n && i < n)
		       {
			       putchar(i);
			       putchar(n);
			       if (n ==57 && i == 56)
			       {
				       break;
			       }
			putchar(',');
			putchar(' ');
			}	
			n++;
		}
		i++;
       }
	putchar('\n');

	return (0);
}
