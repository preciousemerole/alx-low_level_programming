#include <stdio.h>
#include "main.h"

/**
 * print_array -  prints n elements of an array of integers,
 * followed by a new line.
 * Numbers must be separated by comma, followed by a space
 * and displayed in the same order as they are stored in the array
 * @a: arrays to be printed
 * @n: number of elements to be printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
	printf("\n");
}
