#include "main.h"

/**
 * infinite_add - add two numbers
 * @n1 - first number
 * @n2 - second number
 * @r: buffer to store the number
 * @size_r: buffer size
 * Return: pointer to the buffer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, l, m, n, o = 0;

	for (i = 0; n1[i] != '\0'; i++)
		;
	for (j = 0; n2[j] != '\0'; j++)
		;
	if (i >= j)
		l = i;
	else 
		l = j;
	if (size_r <= l + 1)
		return (0);
	r[l + 1] = '\0';
	i--; j--; size_r--;
	m = n1[i] - '0', n = n2[j] - '0'; 
	for ( ; l >= 0; l--, size_r--)
	{
		k = m + n + o;
		if (k >= 10)
			o = k / 10;
		else
			o = 0;
		if (k > 0)
			r[l] = (k % 10) + '0';
		else
			r[l] = '0';
		if (i > 0)
			i--, m = n1[i] - '0';
		else
			m = 0;
		if (j > 0)
			j--; n = n2[j] - '0';
		else
			n = 0;
	}
	if (*(r) == '0')
		return (r[1]);
	else
		return (r);
}

