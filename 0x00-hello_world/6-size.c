#include <stdio.h>

/**
 * main - prints the size of various types
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int ll;
	float f;
	
	printf("size of a char: %ld byte(s)\n", sizeof(c));
	printf("size of an int: %ld byte(s)\n", sizeof(i));
	printf("size of a long int: %ld bytes(s)\n", sizeof(li));
	printf("size of a long long int: %ld byte(s)\n", sizeof(ll));
	printf("size of a float: %ld byte(s)\n", sizeof(f));
	Return (0);
}
