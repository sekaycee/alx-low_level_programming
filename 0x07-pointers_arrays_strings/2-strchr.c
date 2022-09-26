#include "main.h"

/**
 * _strchr - locate a character in a string
 * @s: input string
 * @c: character to locate
 * Return: pointer to char in string if found. NULL if not
 */
char *_strchr(char *s, char c)
{
	for ( ; *s != '\0'; ++s)
		if (*s == c)
			return (s);
	if (*s == c)
		return (s);

	return (0); /* evaluates to NULL */
}

