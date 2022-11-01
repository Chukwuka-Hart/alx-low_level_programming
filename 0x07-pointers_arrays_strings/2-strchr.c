#include "main.h"

/**
 * _strchr - locates a character string
 *
 * @s: string
 * @c: occurrence character
 *
 * Return: a pointer 
 */

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if ( s[x] == c)
			return (s);
		else
			return (NULL);
	}
}
