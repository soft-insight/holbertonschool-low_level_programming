#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: the name of the file to create
 * @text_content: the string to write to the file
 *
 * Return:1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int i = 0;
	int fd, wr;

	if (!filename)
		return (-1);

	while (text_content[i] != '\0')
		i++;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
		wr = write(fd, text_content, i);

	if (wr == -1)
		return (-1);
	close(fd);
	return (1);
}
