#include "main.h"

/**
 * string_nconcat - concatenate two strings
 * @s1: first input string
 * @s2: second input string
 * @n: input string limit
 * Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a = 0, b = 0, i;
	char *s;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		a++;
	for (i = 0; s2[i] != '\0'; i++)
		b++;
	if (n >= b)
		n = b;

	s = malloc(sizeof(char) * (a + n + 1));
	if (!s)
	{
		free(s);
		return (0);
	}
	for (i = 0; i < a; i++)
		s[i] = s1[i];
	for (i = 0; i < n; i++)
		s[a + i] = s2[i];

	s[a + i] = '\0';
	return (s);
}

