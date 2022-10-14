#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to search
 * @size: number of elements in array
 * @cmp: pointer to the function to be used to compare values
 * Return: no element or size <= 0, return -1, otherwise
 * return indexof first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i] != 0))
				return (i);
		}
		if (size <= 0)
			return (-1);
	}
	return (-1);
}
