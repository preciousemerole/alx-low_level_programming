#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * print the result of the multiplication, followed by a new line
 * assumes thatthe two numbers
 * and result of the multiplication can be stored in an integer
 * @argc: number of argument
 * @argv: argument vector
 *
 * Return: 0 if successful
 * otherwise Error, if does not receive two arguments
 * followed by a new line, and return 1
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
