#include <stdio.h>
#include "main.h"

/**
 * main - Entry gate
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(argv[1], argv[2]);
	exit(0);
}

/**
 * copy_file - ...
 * @src: ...
 * @dest: ...
 *
 * Return: ...
 */

void copy_file(const char *src, const char *dest)
{
	int fds, fdt, r;
	char buffer[1024];

	fds = open(src, O_RDONLY);
	if (!src || fds == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	fdt = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((r = read(fds, buffer, 1024)) > 0)
	{
		if (write(fdt, buffer, r) != r || fdt == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			exit(99);
		}
	}

	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	if (close(fds) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fds);
		exit(100);
	}

	if (close(fdt) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdt);
		exit(100);
	}
}
