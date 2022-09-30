#include <stdio.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}

