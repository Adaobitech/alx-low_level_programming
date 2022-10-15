#include "3-calc.h"

/**
 * op_add - Calculates sum of two integers
 * @a: first integer
 * @b: second integer
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Calculates the difference between two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculates the product of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: The product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Calculates the division of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: The division of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates the remainder of the division of two integers
 * @a: first integer
 * @b: seconf integer
 *
 * Return: Remainder of a divided by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
