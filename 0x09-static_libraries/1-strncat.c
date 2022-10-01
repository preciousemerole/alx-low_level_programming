#include "main.h"

/**
 * *_strncat - concatenates two strings.
 * uses at most n bytes from src and,
 * src does not need to be null-terminated if it contains n or more bytes
 * @src: string to add
 * @dest: string to append to
 * @n: nmber of bytes of string to concatenate
 *
 * Return: a pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	return (dest);
}
