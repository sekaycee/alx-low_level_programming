#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 * @s: input string
 * @accept: input substring
 * Return: bytes from accept in s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n;

	n = 0;
	for ( ; *s != '\0'; s++)
	{
		for ( ; *accept != '\0'; accept++)
		{
			if (*s == *accept)
			{
				n++;
				break;
			}
		}
		if (*s != *accept)
			break;
	}		
	return (n);
}

