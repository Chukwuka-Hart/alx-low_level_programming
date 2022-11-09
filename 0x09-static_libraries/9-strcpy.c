#include "main.h"

/**
 * _strcpy - is a function that copies the string pointed
 *
 * @src: source char
 * @dest: destination char
 *
 * Return: pointer to destination
 */

char *_strcpy(char *dest, char *src)
{
	int d;

	for (d = 0; src[d] != '\0'; d++)
	{
		dest[d] = src[d];
	}
	dest[d] = '\0';

	return (dest);
}
