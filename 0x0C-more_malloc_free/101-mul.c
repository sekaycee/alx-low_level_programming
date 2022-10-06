#include "main.h"

/**
 * Error - print Error string
 * Return: Error followed by a new line
 */
void Error(void)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	exit(98);
}

/**
 * is_digit - check if all characters are digits
 * @grid: array of characters
 * Return: 1 all digits 0 otherwise
 */
int is_digit(char **grid)
{
	int i, j;

	for (i = 1; i <= 2; i++)
		for (j = 0; grid[i][j]; j++)
		{
			if (grid[i][j] < '0' || grid[i][j] > '9')
				return (0);
		}
	return (1);
}

/**
 * _calloc- initialize memory spaces with zero
 * @nmemb: number of elements
 * @size: memory size
 * Return: pointer to new allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *a;

	if (nmemb == 0 || size == 0)
		return (0);

	a = malloc(nmemb * size);
	if (!a)
		return (0);

	for (i = 0; i < (nmemb * size); i++)
		a[i] = 0;

	return (a);
}

/**
 * main - multiply 2 positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0 (Success)
 */
int main(int argc, char **argv)
{
	int i, j, c, l1 = 0, l2 = 0;
	char *s1 = argv[1], *s2 = argv[2];
	int *a, *b, *p;

	if (argc != 3 || is_digit(argv) != 1)
		Error();
	if (*s1 == '0' || *s2 == '0')
		_putchar('0');
	while (*(argv[1] + l1))
		l1++;
	while (*(argv[2] + l2))
		l2++;
	a = malloc(l1 * sizeof(int));
	b = malloc(l2 * sizeof(int));
	p = _calloc(l1 + l2 + 1, sizeof(int));
	if (!a || !b || !p)
		Error();
	for (i = l1 - 1, j = 0; i >= 0; i--, j++)
		a[j] = s1[i] - '0';
	for (i = l2 - 1, j = 0; i >= 0; i--, j++)
		b[j] = s2[i] - '0';
	for (i = 0; i < l2; i++)
		for (j = 0; j < l1; j++)
			p[i + j] += b[i] * a[j];
	for (i = 0; i < l1 + l2; i++)
		c = p[i] / 10, p[i] %= 10, p[i + 1] += c;
	for (i = l1 + l2; i >= 0; i--)
		if (p[i] > 0)
			break;
	for (; i >= 0; i--)
		_putchar(p[i] + '0');
	_putchar('\n');
	free(a), free(b), free(p);
	return (0);
}

