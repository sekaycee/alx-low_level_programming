#include "main.h"

/**
 * append_text_to_file - append text to the end of file
 * @filename: name of file to be modified
 * @text_content: text that will be appended
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (i = 0; text_content[i] != '\0'; i++)
		;

	write(fd, text_content, i);
	close(fd);
	return (1);
}

