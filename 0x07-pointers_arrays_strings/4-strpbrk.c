#include "main.h"

/**
 * _strpbrk - searches a string for any of a ser of bytes
 *
 * @s: input string
 * @accept: string
 *
 * Return: a byte to the string or null
 */

char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
				return (s);
		}

		s++;
	}

	return (0);
}
