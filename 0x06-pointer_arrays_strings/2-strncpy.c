#include "main.h"

/**
 * _strcpy - copy a string
 * @dest: destination char pointer arg
 * @src: source char pointer arg
 * @n: integer limit arg
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && scr[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

