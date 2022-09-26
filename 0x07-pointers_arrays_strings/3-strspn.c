#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 * @s: input string
 * @accept: input substring
 * Return: bytes from accept in s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
			}
		}
		if (s[i] != accept[j])
			break;
	}
	return (n);
}

