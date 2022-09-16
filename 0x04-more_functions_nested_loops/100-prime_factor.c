#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 always
 */

int main(void)
{
	long long int n;
	n = 612852475143;
	long int d = 2, a = 0, largest;

	while (n != 0)
	{
		if (n % d != 0)
		{
			d = d + 1;
		}
		else
		{
			largest = n;
			n = n / d;
		}
		if (n == 1)
		{
			printf("%ld\n", largest);
			a = 1;
			break;
		}
	}
	return (0);
}
