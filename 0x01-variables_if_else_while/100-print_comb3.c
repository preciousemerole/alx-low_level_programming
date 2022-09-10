#include <stdio.h>

/**
 * main - print all possible combination of two digits
 * separated by a comma and followed by a space
 * the two digits must be different
 * print only smallest digits
 * all in ascending order
 * char variable not allowed
 * use only putchar function up to a max of five times
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m;

	for (n = 48; n < 58; n++)
	{
		for (m = 49; m < 58; m++)
		{
			if (n > m)
			{
				putchar(n);
				putchar(m);
				if (n != 55 || m != 56)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
