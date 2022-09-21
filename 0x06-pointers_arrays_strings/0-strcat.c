#include "main.h"

/**
 * *_strcat - concatenates two strings.
 * appends the src string to the dest string, overwriting the terminating null byte at the end of dest,
 * and then adds a terminating null byte
 * @strc:string to add
 * @dest:string to append to
 * 
 * Return: resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
