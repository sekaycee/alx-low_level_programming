#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: first string arg
 * @s2: second string arg
 * Return: 0 if equal, another number otherwise
 */
int _strcmp(char *s1, char *s2)
{
	int i, c;

	c = 0;
	for (i = 0; c == 0; i++)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			break;
		c = s1[i] - s2[i];
	}
	return (c);
}

