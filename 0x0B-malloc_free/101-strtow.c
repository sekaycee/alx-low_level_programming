#include "main.h"

/**
 * free_matrix - free the 2d array memory
 * @grid: 2d array
 * @height: number of rows in array
 */
void free_matrix(char** grid, unsigned int height)
{
	unsigned int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

/**
 * strtow - split a string into words
 * @str: input string
 * Return: pointer to an array of strings(words)
 */
char **strtow(char *str)
{
	int b, c, h, i, j;
	char **s;

	if (!str || *str == '\0')
		return (0);
	for (c = h = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			h++;
	s = malloc(sizeof(char *) * (h + 1));
	if (!s || h == 0)
	{
		free(s);
		return (0);
	}
	for (i = b = 0; i < h; i++)
	{
		for (c = b; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				b++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				s[i] = malloc(sizeof(char) * (c - b + 2));
				if (!s[i])
				{
					free_matrix(s, i);
					return (0);
				}
				break;
			}
		}
		for (j = 0; b <= c; b++, j++)
			s[i][j] = str[b];
		s[i][j] = '\0';
	}

	s[i] = NULL;
	return (s);
}

