#include <stdio.h>

/**
 * main - prints all possible combination of
 * single digit numbers
 * must be separated by a comma and a single space
 * numbers printed in ascending order
 * only putchar function allowed,
 * and used to a maximum of four times
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
