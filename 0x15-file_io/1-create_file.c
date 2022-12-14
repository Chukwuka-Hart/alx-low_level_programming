#include "main.h"
#include <string.h>

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: content to read into file
 *
 * Return: 1 on success, -1 on any failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
		write(fd, text_content, strlen(text_content));

	close(fd);

	return (1);
}
