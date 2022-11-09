#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: input string
 * @accept: input character
 *
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int d, e;
	int f = 0;

	for (d = 0; s[d] != '\0'; d++)
	{
		if (s[d] != 32)
		{
			for (e = 0; accept[e] != '\0'; e++)
			{
				if (s[d] == accept[e])
				f++;
			}
		}
		else
		{
			return (f);
		}
	}

	return (f);
}

