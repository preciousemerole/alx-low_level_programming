#include "main.h"

/**
 * prime_helper - checks if prime
 * @n: number to check
 * @i: divisor
 *
 * Return: 0 if number is divisible,
 * otherwise 1, if not
 */
int prime_helper(int n, int i)
{
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);
	return (prime_helper(n, i + 1));
}

/**
 * is_prime_number -  checks if a number is a prime number,
 * @n: number to be checked
 *
 * Return: 1 if the input integer is a prime number,
 * otherwise return 0.
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);

	return (prime_helper(n, i));
}
