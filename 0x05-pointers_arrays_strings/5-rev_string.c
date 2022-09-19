#include "main.h"

/**
 * rev_string - reverse a string
 * @s: char pointer argument
 */
void rev_string(char *s)
{
	int c, i, j;
	char temp;

	c = 0;
	while (s[c] != '\0')
		c++;

	for (i = 0; i < c - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			tmp = s[j];
			s[j] = s[j - 1];
			s[j - 1] = tmp;
		}
	}
}

