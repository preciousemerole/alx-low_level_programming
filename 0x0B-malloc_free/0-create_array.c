#include "main.h"

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of array to initialize
 * @c:character to initialize the array with
 *
 * Return: NULL if it fails or size = 0
 * otherwise return a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
