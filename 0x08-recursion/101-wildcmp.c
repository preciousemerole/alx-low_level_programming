#include "main.h"

/**
 * strlen_no_wilds - Returns the length of a string
 * without taking into account wildcard characters.
 * @str: string to be evaluated
 * Return: string length
 */
int strlen_no_wilds(char *str)
{
	int len = 0, index = 0;

	if (*(str + index))
	{
		if (*str != '*')
			len++;

		index++;
		len += strlen_no_wilds(str + index);
	}
	return (len);
}

/**
 * iterate_wild: iterates through a string located at the wildcard
 * until it points to a non-wildcard
 * @wildstr: string to be iterated through
 */
void iterate_wild(char **wildstr)
{
	if (**wildstr == '*')
	{
		(**wildstr)++;
		iterate_wild(wildstr);
	}
}

/**
 * postfix_match -checks if the sring matches the postfix of
 * another string potentially containing wildcards
 * @str: string to be matched
 * @postfix: the postfix
 *
 * Return: a pointer to the null byte at the end of the postfix if
 * str and postfix are identical
 * otherwise a pointer to first unmatched character in postfix.
 */
char *postfix_match(char *str, char *postfix)
{
	int str_len = strlen_no_wilds(str) - 1;
	int postfix_len = strlen_no_wilds(postfix) - 1;

	if (*postfix == '*')
		iterate_wild(&postfix);

	if (*(str + str_len - postfix_len) == *postfix && *postfix != '\0')
	{
		postfix++;
		return (postfix_match(str, postfix));
	}
	return (postfix);
}

/**
 * wildcmp - compares two strings
 * and takes into account special characters
 * @s1:First string
 * @s2:Second string
 *
 * Return: 1 if the strings can be considered identical, otherwise return 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		iterate_wild(&s2);
		s2 = postfix_match(s1, s2);
	}

	if (*s2 == '\0')
		return (1);
	if (*s1 != *s2)
		return (0);
	return (wildcmp(++s1, ++s2));
}
