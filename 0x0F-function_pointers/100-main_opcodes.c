#include "function_pointers.h"

/**
 * main - print opcodes
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int i, nb;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	nb = atoi(argv[1]);

	if (nb < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < nb; i++)
	{
		printf("%02hhx", ((char *)main)[i]);
		if (i != nb - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
