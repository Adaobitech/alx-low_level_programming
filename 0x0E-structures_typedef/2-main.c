#include <stdio.h>
#include "dog.h"

/**
 * main - checks the code
 *
 * Return: Always 0
 */

int main(void)
{
	struct dog my_dog;

	my_dog.name = "Simba";
	my_dog.age = 5.8;
	my_dog.owner = "Adaobi";
	print_dog(&my_dog);
	return (0);
}
