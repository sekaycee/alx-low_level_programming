#include "main.h"

/**
 * _strncat - concatenate to strings to n
 * @dest: destination char pointer argument
 * @src: source char pointer argument
 * @n: concatenation limit on src
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; j >= 0 && j < n; j++)
	{
		dest[i + j] = src[j];
		if (src[j] == '\0')
			break;
	}
	return (dest);
}

