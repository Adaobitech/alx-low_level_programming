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
		sum += a[(size + 1) * i];
		sum1 += a[(size - 1) * (b + 1)];
	}
	printf("%d, ", sum);
	printf("%d\n", sum1);
}
