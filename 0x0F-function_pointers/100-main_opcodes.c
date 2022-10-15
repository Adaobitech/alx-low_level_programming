#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: argument vector
 * Return: Always
 */

int main(int argc, char *argv[])
{
	int i, bytes;
	char *ar;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[i]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ar = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - i)
		{
			printf("%02hhx\n", ar[i]);
			break;
		}
		printf("%02hhx\n", ar[i]);
	}
	return (0);
}
