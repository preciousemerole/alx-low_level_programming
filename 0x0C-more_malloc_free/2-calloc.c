#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_calloc - a function that allocates memory for an array,
 * using malloc
 * @nmemb: number of element
 * @size: number of byte
 *
 * Return: NULL if malloc fails or nmemb or size is 0
 * otherwise return a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;

	return (ptr);
}
