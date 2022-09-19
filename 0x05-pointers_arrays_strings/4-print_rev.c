#include "main.h"

/**
 * print_rev -  prints a string, in reverse, followed by a new line.
 * @s: string to be reversed
 */
void print_rev(char *s)
{
	int i;
	int len;
	int j;

	i  = 0;
	while (s[len] != '\0')
		i++;
	len = i;
	j = len;
	for (j = 0; j >= 0; j--)
		_putchar(s[j]);
	_putchar('\n');
}
