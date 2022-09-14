#include "main.h"
#include "6-abs.c"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to ninety eight,
 * followed by a new line.
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = 0; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	} else
	{
		for (i = 0; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
