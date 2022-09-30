#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int a, b, p;

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	p = a * b;
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", p);
	return (0);
}

