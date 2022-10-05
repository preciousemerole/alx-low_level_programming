#include "main.h"

/**
 * *_strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to duplicate
 *
 * Return: NULL if str == NULL or insufficient memory
 * otherwise return a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *array;
	int i = 0, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		len++;
		i++;
	}

	array = malloc(sizeof(char) * (len + 1));

	if (array == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		array[i] = str[i];
	array[len] = '\0';

	return (array);
}
