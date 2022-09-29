#include "main.h"

/**
 * get_strlen - gets length of a string
 * @s: string to get length
 *
 * Return: length of a string
 */
int get_strlen(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += get_strlen(s + 1);
	}
	return (len);
}

/**
 * check_palindrome - checks if a string is a palindrome
 * @s: string to be checked
 * @len: length of string
 * @i:index of string to be checked
 *
 * Return: 1 if true, 0 if false
 */
int check_palindrome(char *s, int len, int i)
{
	if (s[i] == s[len / 2])
		return (1);
	if (s[i] == s[len - i - 1])
		return (check_palindrome(s, len, i + 1));
	return (0);
}

/**
 * is_palindrome - checks if a a string is a palindrome or not
 *@s: string to evaluate
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	int i = 0;
	int len = get_strlen(s);

	if (!(*s))
		return (1);
	return (check_palindrome(s, len, i));
}
