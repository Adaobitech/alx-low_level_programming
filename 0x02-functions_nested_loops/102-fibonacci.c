#include <stdio.h>
/**
 * main -Entry point
 *
 * Code to print the first 50 fibonacci numbers
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	long int i, j, k, n;

	i = 1;
	j = 2;
	n = 2;

	printf("%lu, ", i);
	while (n <= 50)
	{
		if (n == 50)
		{
			printf("%lu\n", j);
		}
		else
		{
			printf("%lu, ", j);
		}

		k = j;
		j += i;
		i = k;

		n++;
	}
	return (0);
}
