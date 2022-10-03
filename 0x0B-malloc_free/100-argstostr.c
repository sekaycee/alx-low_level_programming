#include "main.h"

/**
 * argstostr - concatenate all the arguments of my program
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to allocated memory
 */
char *argstostr(int ac, char **av)
{
	int b, c, i, j;
	char *s;

	if (ac == 0)
		return (0);
	for (c = i = 0; i < ac; i++)
	{
		if (!av[i])
			return (0);
		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}

	s = malloc(sizeof(char) * (c + 1));
	if (!s)
	{
		free(s);
		return (0);
	}

	for (i = j = b = 0; b < c; j++, b++)
	{
		if (av[i][j] == '\0')
		{
			s[b] = '\n';
			i++;
			b++;
			j = 0;
		}
		if (b < c - 1)
			s[b] = av[i][j];
	}

	s[b] = '\0';

	return (s);
}

