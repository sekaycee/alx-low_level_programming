#include "main.h"
#include <stdio.h>

/**
 * fcp_error - check if files can be opened
 * @file_from: file_from
 * @file_to: file_to
 * @argv: the arguments vector
 * Return: no return
 */
void fcp_error(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - copy the content of a file to another file
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 Always success
 */
int main(int argc, char **argv)
{
	int file_from, file_to, err_close;
	ssize_t nc, nw;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	fcp_error(file_from, file_to, argv);

	nc = 1024;
	while (nc == 1024)
	{
		nc = read(file_from, buf, 1024);
		if (nc == -1)
			fcp_error(-1, 0, argv);
		nw = write(file_to, buf, nc);
		if (nw == -1)
			fcp_error(0, -1, argv);
	}

	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}

