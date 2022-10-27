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

	for (d = 0; src[d] != '\0'; d++)
	{
		dest[d] = src[d];
	}
	while (d < n)
	{
		dest[d] = '\0';
		d++;
	}

	return (dest);
}
