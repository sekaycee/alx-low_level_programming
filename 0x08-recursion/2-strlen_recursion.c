#include "main.h"

/**
 * _strlen_recursion - return the length of a string
 * @s: input string
 * Return: length of s
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
		i = 1 + _strlen_recursion(s + 1);
	return (i);
}

