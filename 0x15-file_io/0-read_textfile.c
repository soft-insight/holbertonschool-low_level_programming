#include "main.h"

/**
 * read_textfile - reads a text
 * @letters: the number of letters
 * @filename: the name of the file to read
 *
 * Return: the number of letterd
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	unsigned int num_lett = 0;
	int fd;
	char *buf;

	buf = malloc(sizeof(char) * letters);
	if (!buf || !filename)
		return (0);

	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
		return (0);

	num_lett = read(fd, buf, letters);

	write(STDOUT_FILENO, buf, num_lett);
	close(fd);
	return (num_lett);
}
