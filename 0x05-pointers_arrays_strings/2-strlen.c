#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: char pointer argument
 * Return: length of string argument
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	/* while (*(s + i) != '\0') */
	while (s[i] != '\0') /* another way of writing the while loop */
		i++;
	return (i);
}

