#include "main.h"

/**
 * _strstr - find the first occurrence of the substring needle
 * in the string haystack
 * @haystack: input string
 * @needle: input substring
 * Return: pointer to the found substring. NULL is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *str_a, *str_b;

	for ( ; *haystack != '\0'; haystack = str_a + 1)
	{
		str_a = haystack;
		str_b = needle;
		while (*haystack != '\0' && *str_b != '\0' && *haystack == *str_b)
		{
			haystack++;
			str_b++;
		}
		if (str_b == '\0')
			return (str_a);
	}
	return (0);
}

