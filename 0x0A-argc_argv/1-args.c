#include <stdio.h>

/**
 * main - prints number of arguments
 * @argc:Argument count
 * @argv: Argument vector
 * Return: 0 success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
