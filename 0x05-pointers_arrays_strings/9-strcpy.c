#include "main.h"

/**
 * _strcpy - copy the string pointed to by src, including the terminal
 * null byte (\0), to the buffer pointed to by dest
 * @dest: char pointer argument
 * @src: char pointer argument
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i > -1; i++)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
			break;
	}
	return (dest);
}

