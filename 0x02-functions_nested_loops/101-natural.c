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
	int i;
	unsigned long int Sum = 0;
	unsigned long int a = 0;
	unsigned long int b = 0;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3) == 0)
		{
			a = a + i;
		}
		else if ((i % 5) == 0)
		{
			b = b + i;
		}
	}
	Sum = a + b;
	printf("%lu ", Sum);
	return (0);
}
