#include "main.h"
#include <stdio.h>

/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: int
 */

int main(int argc, char *argv[])
{
	unsigned long mul;
	int i, j, t;
	char a[] = "Error\n";

	if (argc != 3)
	{
		for (t = 0; a[t]; t++)
			_putchar(a[t]);
		exit(98);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
			{
				for (t = 0; a[t]; t++)
					_putchar(a[t]);
				exit(98);
			}
		}
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	_putchar(mul);

	return (0);
}
