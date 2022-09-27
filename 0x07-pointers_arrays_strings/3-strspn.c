#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s:string to evaluate
 * @accept:string to contain list of character to match in s
 *
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int j = 0;

	while (*s)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				bytes++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
