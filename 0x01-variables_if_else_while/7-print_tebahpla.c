#include <stdio.h>

/**
 * main - prints the lowercase alphabets in reverse
 * followed by a new line
 * use only putchar function
 * use putchar only twice
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
