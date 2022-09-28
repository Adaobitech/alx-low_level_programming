#include "main.h"

/**
 * _is_prime_number - prints prime number
 * @n: Integer
 * Return: 1 if Prime numbea,0 if not
 */

int is_prime_number(int n)
{
	int start = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, start));
}

/**
 * is_prime - return 1 if n isgreh
 * @n: String
 * @start: String
 * Return: prime number
 */

int is_prime(int n, int start)
{
	if (n <= 1)
		return (1);
	else if (n % start == 0)
		return (0);
	return (is_prime(n, start - 1));
}
