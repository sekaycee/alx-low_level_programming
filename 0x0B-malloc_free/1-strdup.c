#include "main.h"

/**
 * _strdup - return a pointer to a newly allocated space
 * in memory.. which contains a copy of the param string
 * @str: string argument
 * Return: pointer to allocated memory
 */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *s;

	for (j = 0; str[j] != '\0'; j++)
		;
	j++;
	s = malloc(sizeof(char) * j);
	if (!s)
		return (0);
	for (i = 0; i < j; i++)
		s[i] = str[i];
	return (s);
}

