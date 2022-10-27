#include "main.h"

/**
 * _strcat - concatenates two string
 *
 * @dest: strin  to cat
 * @src: string to cat
 *
 * Return: pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int d;
	int j;

	d = 0;

	for (j = 0; dest[j] != '\0'; j++)
	{}
	while (src[d] != '\0')
	{
		dest[d + j] = src[d];
		d++;
	}

	dest[d + j] = '\0';

	return (dest);
}
