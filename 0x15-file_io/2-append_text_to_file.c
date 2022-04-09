#include "main.h"

/**
 * append_text_to_file - appends text to  file
 * @filename: name of the file to read
 * @text_content: number characters in the text
 *
 * Return: the num of chars
 */

int append_text_to_file(const char *filename, char *text_content)
{

	int fd, wr, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[i] != 0)
		i++;

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	wr = write(fd, text_content, i);

	if (wr == -1)
		return (-1);

	close(fd);

	return (1);
}
