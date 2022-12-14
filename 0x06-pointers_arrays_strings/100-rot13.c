#include "main.h"

/**
 * rot13 - encodes a string
 *
 * @c: string
 *
 * Return: encoded string
 */

char *rot13(char *c)
{
	char letters[52] = {'A', 'B', 'C', 'D', 'E',
		'F', 'G', 'H', 'I', 'J',
		'K', 'L', 'M', 'N', 'O',
		'P', 'Q', 'R', 'S', 'T',
		'U', 'V', 'W', 'X', 'Y',
		'Z', 'a', 'b', 'c', 'd',
		'e', 'f', 'g', 'h', 'i',
		'j', 'k', 'l', 'm', 'n',
		'o', 'p', 'q', 'r', 's',
		't', 'u', 'v', 'w', 'x',
		'y', 'z'};

	char rot13key[52] = {'N', 'O', 'P', 'Q', 'R',
		'S', 'T', 'U', 'V', 'W',
		'X', 'Y', 'Z', 'A', 'B',
		'C', 'D', 'E', 'F', 'G',
		'H', 'I', 'J', 'K', 'L',
		'M', 'n', 'o', 'p', 'q',
		'r', 's', 't', 'u', 'v',
		'w', 'x', 'y', 'z', 'a',
		'b', 'c', 'd', 'e', 'f',
		'g', 'h', 'i', 'j', 'k',
		'l', 'm'};

	int d;
	int e;

	for (d = 0; c[d] != '\0'; d++)
	{
		for (e = 0; e < 52; e++)
		{
			if (c[d] == letters[e])
			{
				c[d] = rot13key[e];
				break;
			}
		}
	}

	return (c);
}
