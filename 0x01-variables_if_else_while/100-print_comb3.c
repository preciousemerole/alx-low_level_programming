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
	int i;
	int j;

	for (i = 48; i < 57; i++)
	{
		for (j = i + 1; j < 58; j++)
		{
			putchar(i);
			putchar(j);
			if (i != 56 || j != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
