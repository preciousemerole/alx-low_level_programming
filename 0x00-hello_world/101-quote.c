#include <stdio.h>
#include <unistd.h>

/**
 * main - printsa particular part of a quote exactly
 * followed by a new line, to the standard error
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, str, 59);
	return (1);
}
