#include "main.h"

/**
 * _strdup - return a pointer to a newly allocated space
 * in memory.. which contains a copy of the param string
 * @str: string argument
 * Return: pointer to allocated memory
 */
char *_strdup(char *str)
{
	unsigned int i, c;
	char *s;

	if (!str)
		return (0);
	for (c = 0; str[c] != '\0'; c++)
		;
	c++;
	s = malloc(sizeof(char) * c);
	if (!s)
		return (0);
	for (i = 0; i < c; i++)
		s[i] = str[i];
	return (s);
}

