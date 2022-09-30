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
	int p;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	p = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", p);
	return (0);
}

