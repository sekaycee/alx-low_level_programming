#include "main.h"

/**
 * create_file - create a file
 * @filename: name of file to be created
 * @text_content: text to be added to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (i = 0; *(text_content + i) != '\0'; i++)
		;

	write(fd, text_content, i);
	close(fd);
	return (1);
}

