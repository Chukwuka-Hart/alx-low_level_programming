#include "main.h"

/**
 * read_textfile - reads and print a text file to the posix
 * @filename: source file
 * @letters: num of letters to read and print
 *
 * Return: ....
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r;
	char *buffer = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);

	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
		return (0);

	r = read(fd, buffer, letters);
	write(STDOUT_FILENO, buffer, r);

	free(buffer);
	close(fd);

	return (r);
}
