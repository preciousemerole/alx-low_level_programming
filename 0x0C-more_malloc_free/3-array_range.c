#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *array_range -  a function that creates an array of integers.
 * new array should contain valu from min to max
 * in the order min to max
 * @min: minimum range of value stored
 * @max: maximum range of value stored and element
 *
 * Return: NULL if malloc fails or min > max
 * otherwise, return a pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i;
	int *ptr;
	int len;

	if (min > max)
		return (NULL);
	len = 0;
	for (i = min; i <= max; i++)
		len++;

	ptr = malloc(sizeof(int) * len);
	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (min <= max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	return (ptr);
}
