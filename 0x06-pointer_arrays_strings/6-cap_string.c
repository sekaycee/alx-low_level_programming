#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @s: input string
 * Return: pointer to capitalized string
 */
char *cap_string(char *s)
{
	int i, j, is_word = 0;
	char sep[] = ",;.!?(){}\n\t\" ";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[0] >= 'a' && s[0] <= 'z')
			is_word = 1;
		for (j = 0; sep[j] != '\0'; j++)
			if (s[i] == sep[j])
				is_word = 1;
		if (is_word)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] -= ('a' - 'A');
				is_word = 0;
			}
			else if (s[i] >= 'A' && s[i] <= 'Z')
			{
				is_word = 0;
			}
			else if (s[i] >= '0' && s[i] <= '9')
			{
				is_word = 0;
			}
		}
	}
	return (s);
}

