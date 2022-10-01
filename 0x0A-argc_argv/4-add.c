#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * Print the result, followed by a new line
 * assume numbers and the addition of all the numbers
 * can be stored in an int
 * @argc: number of argument
 * @argv: array of argument
 *
 * Return: result
 */
int main(int argc, char *argv[])
{
	int sum, num, i, j, k;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				puts("Error");
				return (1);
			}
		}
	}
	for (k = 1; k < argc; k++)
	{
		num = atoi(argv[k]);
		if (num >= 0)
		{
			sum += num;
		}
	}
	printf("%d\n", sum);
		return (0);
}
