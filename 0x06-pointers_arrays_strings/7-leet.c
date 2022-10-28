#include "main.h"

/**
 * leet - function that encodes a string
 *
 * @d: variable
 *
 * Return: 0
 */

char *leet(char *c)
{
	int d[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int e[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	int f;
	int g;

	for (f = 0; c[f] != '\0'; f++)
	{
		for (g = 0; d[g] != '\0'; g++)
		{
			if (c[f] == d[g])
			{
				c[f] == e[g];
			}
		}
	}

	return (c);
}
