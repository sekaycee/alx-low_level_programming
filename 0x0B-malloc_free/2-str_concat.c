#include "main.h"

/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to allocated memory
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int a, b, i, j;
	char *sb;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "":
	for (a = 0; s1[a] != '\0'; a++)
		;
	for (b = 0; s2[b] != '\0'; b++)
		;

	sb = malloc(sizeof(char) * (a + b + 1));
	if (!sb)
		return (0);
	for (i = 0; i < a; i++)
		sb[i] = s1[i];
	for (j = 0; j < b + 1; i++, j++)
		sb[i] = s2[j];
	return (sb);
}

