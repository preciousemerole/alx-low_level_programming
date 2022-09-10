#include <stdio.h>

/**
 * main - prints all the number of base 16 in lowercase,
 * followed by a new line
 * only putchar function allowed
 * use putchar funtion only thrice
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char ch;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
