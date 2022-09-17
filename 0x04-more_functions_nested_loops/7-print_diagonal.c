#include "main.h"
/**
 * print_diagonal -  draws a diagonal line
 * @n: input received
 */
void print_diagonal(int n)
{
	int col, row;

	if (n > 0)
	{
		for (col = 0; col < n; col++)
		{
			for (row = 0; row < n; row++)
			{
				_putchar(' ');
			}
			_putchar('\\');

			if (col == (n - 1))
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n')
}
