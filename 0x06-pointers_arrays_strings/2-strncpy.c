#include "main.h"

/**
 * _strncpy - copies a string
 *
 * @dest: pointer to dest
 * @src: pointer to src
 * @n: number of bytes
 *
 * Return: pointer to the dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int d;

	for (d = 0; dest[d] != '\0'; d++)
	{
		src[d] = dest[d];
	}
	while (d < n)
	{
		d++;
	}

	src[d] = '\0';

	return (dest);
}
