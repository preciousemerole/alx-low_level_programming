#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money.
 * uses atoi to parse the parameter passed to your program
 * @argc: number of arguments
 * @argv: argument vector
 * @cents - amount  of cents you need to give back
 *
 * Return: 0 otherwise print Error, followed by a new line, and return 1
 * if  the number of arguments passed to your program is not exactly 1
 */
int main(int argc, char *argv[])
{
	int num, j, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	result = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (j = 0; j < 5 && num >= 0; j++)
	{
		while (num >= coins[j])
		{
			result++;
			num -= coins[j];
		}
	}

	printf("%d\n", result);
	return (0);
}
