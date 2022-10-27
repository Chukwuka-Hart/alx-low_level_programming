#include "main.h"

/**
 * _strncat - concatenate two strings and use n bytes
 *
 * @dest: pointer to dest
 * @src: pointer to src
 * @n: number of bytes
 *
 * Return: pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int d, j;

	d = 0;

	for (j = 0; dest[j] != '\0' j++)
		;

	while (src[d] != '\0' && d < n)
	{
		dest[d + j] = src[d];
		d++;
	}

	dest[d + j] = '\0';

	return (dest);
}
