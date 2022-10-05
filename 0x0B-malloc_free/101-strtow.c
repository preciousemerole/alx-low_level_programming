#include "main.h"

/**
 * **strtow - a function that splits a string into words.
 * @str: string to be split
 *
 * Return: NULL if function fails or
 * str == NULL or str == ""
 * otherwise a pointer to an array of strings
 */
char **strtow(char *str)
{
	char **strings;
	int i = 0, words, w, letters, l;

	if (str == NULL || str == '\0')
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);

	for (w = 0; w < words; w++)
	{
		while (str[i] == ' ')
		       i++;
		letters = word_len(str + i);
		strings[w] = malloc(sizeof(char) * letters + 1);

		if (string[w] == NULL)
		{
			for (; w >= 0; w--)
				free(strings[w]);
			free(strings);
			return (NULL);
		}

		for (l = 0; l < letters; l++)
			strings[w][l] = string[i++];
		strings[w][l] = '\0';
	}
	strings[w] = NULL;
	return (strings);
}
