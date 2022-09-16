#include "main.h"
/**
 * print_numbers - prints the numbers, from zero to nine,
 * followed by a new line
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	int c;

	for (c >= '0' && c <= '9')
	{
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}
