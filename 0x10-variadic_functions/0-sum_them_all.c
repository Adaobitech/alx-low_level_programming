#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - return sum of all its parameters
 * @n: number of parameters
 * Return: sum, if n == 0, return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	va_start(ap, n);
	int i, sum = 0;

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);

	return (sum);
	if (n == 0)
		return (0);
}
