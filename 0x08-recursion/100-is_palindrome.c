#include "main.h"

/**
 * _strlen_recursion - return the length of a string
 * @s: input string
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * _strcmp_recursion - compare two strings and return match
 * @s: input string
 * @i: first iterator
 * @j: second iterator
 * Return: 1 if matching.. 0 otherwise
 */
int _strcmp_recursion(char *s, int i, int j)
{
	if (s[i] == s[j])
	{
		if (i == j || i == j + 1)
			return (1);
		return (0 + _strcmp_recursion(s, i + 1, j - 1));
	}
	return (0);
}

/**
 * is_palindrome - check if a string is a palindrome
 * @s: input string
 * Return: 1 if s is a plaindrome.. 0 otherwise
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (_strcmp_recursion(s, 0, _strlen_recursion(s) - 1));
}

