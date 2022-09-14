#include <stdio.h>
/**
 * main - entry point
 *
 * code that prints sum of all the multiples of 3 and 5
 *
 * Return: Always 0
 */

int main(void)
{
	int a, b, i;
	unsigned long int Sum = 0;

	for (i = 1; i < 1024; i++)
	{
		a = i % 3;
		b = i % 5;

		if (a == 0 || b == 0)
		{
			Sum = a + b;
			Sum = Sum + i;

			printf("%lu\n ", Sum);
		}
	}
	return (0);
}
		
