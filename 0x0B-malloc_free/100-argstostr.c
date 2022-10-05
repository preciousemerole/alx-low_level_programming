#include "main.h"

/**
 * *argstostr - a function that concatenates all the arguments of your program.
 * @ac: number of arguments passed
 * @av: array of pointer to arguemnt
 *
 * Return: NULL if it fails or ac == 0 or av == NULL
 * otherwise return a pointer to a new string
 * followed by a new line
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int arg, byte, i, size = ac;

	if (ac == 0 || av == 0)
		return (NULL);

	for (arg = o; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
		       size++;
	}
	str = malloc(sizeof(char) * size + 1);

	if (str == NULL)
		return (NULL);
	i = 0;

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			str[i++] = av[arg][byte];
		str[i++] = '\n';
	}
	str[size] = '\0';
	return (str);
}
