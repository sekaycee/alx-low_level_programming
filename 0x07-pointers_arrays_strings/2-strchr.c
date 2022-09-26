#include "main.h"

/**
 * _strchr - locate a character in a string
 * @s: input string
 * @c: character to locate
 * Return: pointer to char in string if found. NULL if not
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i]; i++)
		if (s[i] == c)
			return (s[i]);

	return (NULL);
}

