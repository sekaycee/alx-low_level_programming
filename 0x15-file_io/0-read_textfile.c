#include "main.h"

/**
 * read_textfile - read a text file and print it to the POSIX standard output
 * @filename: name of the file to be read
 * @letters: number of chars it should read and print
 * Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd, cc;

	if (!filename)
		return (0);

	/* create the buffer */
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	/* open the file */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/* read the file and save in buffer */
	cc = read(fd, buf, letters);
	/* write to standard output */
	write(STDOUT_FILENO, buf, cc);

	close(fd);
	free(buf);
	return (cc);
}

