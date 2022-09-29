#include "main.h"

/**
 * find_sqrt - prints the natural square root of a number
 * @x:number whose squareroot is to be found
 * @y:root to be tested
 *
 * Return: square root, if number has a natural square root
 * -1, if it does not
 */
int find_sqrt(int x, int y)
{
	if (y * y == x)
		return (y);
	if (y == x / 2)
		return (-1);
	return (find_sqrt(x, y + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number whose natural square is to be returned
 *
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (find_sqrt(n, root));
}
