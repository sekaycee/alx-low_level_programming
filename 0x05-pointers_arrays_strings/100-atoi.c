#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: input string
 * Return: integer
 */
int _atoi(char *s)
{
	unsigned int c, sz, oi, pn, m, i;

	sz = oi = 0;
	pn = m = 1;
	for (c = 0; s[c] != '\0'; c++)
	{
		if (sz > 0 && (s[c] < '0' || s[c] > '9'))
			break;
		if (s[c] == '-')
			pn *= -1;
		if ((s[c] >= '0') && (s[c] <= '9'))
		{
			if (sz > 0)
				m *= 10;
			sz++;
		}
	}

	for (i = c - sz; i < c; i++)
	{
		oi = oi + ((s[i] - 48) * m);
		m /= 10;
	}
	return (oi * pn);
}

