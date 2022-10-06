#include "main.h"

/**
 * string_nconcat - concatenate two strings
 * @s1: firsr input string
 * @s2: second input string
 * @n: input string limit
 * Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, i, j;
	char *s;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	s = malloc(sizeof(char) * (i + j + 1));
	if (!s)
	{
		free(s);
		return (0);
	}
	for (a = 0; a < i; a++)
		s[a] = s1[a];
	for (b = 0; b < n || n >= j + 1; a++, b++)
		s[a] = s2[b];
	if (n < j)
		s[a + 1] = '\0';
	return (s);
}

