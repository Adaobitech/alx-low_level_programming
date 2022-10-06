#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *ar, i = 0, t = min;

	if (min > max)
		return (NULL);
	ar = malloc((max - min + 1) * sizeof(int));

	if (!ar)
		return (0);
	while (i <= max - min)
		ar[i++] = t++;
	return (ar);
}
