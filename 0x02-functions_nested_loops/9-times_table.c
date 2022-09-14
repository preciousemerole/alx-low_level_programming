#include "main.h"
/**
 * times_table - prints nine times table, starting from zero
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++);
	{
		for (j = 0; j <= 9; j++)
		{
			int prod = j * i;

			if (j == 0)
			{
				_putchar('0');
			}
}
