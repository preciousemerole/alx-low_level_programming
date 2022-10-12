#include "3-calc.h"

/**
 * op_add - calculates the sum of two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates the difference between two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: the difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides the first integer by the second
 * @a: The first integer
 * @b: The second integer
 *
 * Return: the result of the division of a by b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates the remainder
 * after dividing the first integer by the second integer.
 * @a: The first integer
 * @b: The second integer
 *
 * Return: the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
