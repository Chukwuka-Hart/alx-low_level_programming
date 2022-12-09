#include "main.h"
#include <string.h>

/**
 * append_text_to_file - appends text at the end of file
 * @filename: name of file
 * @text_content: NULL terminated string to add at the end
 *
 * Return: 1 on success otherwise -1 on fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
		w = write(fd, text_content, strlen(text_content));

	close(fd);

	if (w == -1)
		return (-1);

	return (1);
}
