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

	for (x = 0; s[x] != 0; x++)
	{
		if (c == s[x])
			return (s + x);
		else if (c == '\0')
			return (s + x);
	}
	return (0);
}
