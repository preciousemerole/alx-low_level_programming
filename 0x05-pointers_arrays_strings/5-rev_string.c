#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: string to be reversed.
 */
void rev_string(char *s)
{
	char tmp;
	int i;
	int len;
	int j;
	
	len = 0;
	j = 0;

	while (s[len] != '\n')
	{
		len++;
	}

	j = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j--] = tmp;
	}
}
