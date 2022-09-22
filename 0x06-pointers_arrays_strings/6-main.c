#include "main.h"

#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	char str[] = "Expbst. Prtwst. Clze ots.\nhlo! o-wrld 0156ld\theo wod.herld\n";

	char *ptr;

	ptr = cap_string(str);

	printf("%s", ptr);
	printf("%s", str);
	return (0);
}
