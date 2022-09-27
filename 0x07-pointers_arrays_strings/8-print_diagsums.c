#include "main.h"

/**
 * print_diagsums - prints diagonal
 * @a: pointer
 * @size: size
 */

void print_diagsums(int *a, int size)
{
	int i, sum = 0, sum1 = 0;

	for (i = 0; i < size; i++)
	{
		sum += *(a + (size * i + i));
		sum1 += *(a + (size + i + size - 1 - i));
	}
	printf("%d, ", sum);
	printf("%d\n", sum1);
}
