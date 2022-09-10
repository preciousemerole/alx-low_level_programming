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
	int i, j;

	for (i = 10; i <= 19; i++)
	{
		for (j = 10; j <= 19; j++)
		{
			if ((j % 10) > (i % 10))
			{
				putchar((i % 10) + '0');
				putchar((j % 10) + '0');
				if (i != 55 || j != 56)
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
