#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates randown passwords
 * Return: Always 0
 */

int main(void)
{
	int s;
	char c;

	srand(time(NULL));
	while (sum <= 2645)
	{
		c = rand() % 128;
		sum += c;
		putchar(c);
	}
	putchar(2772 - sum);

	return (0);
}
