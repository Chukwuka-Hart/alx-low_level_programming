#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string
 *
 * @d: pointer string to capitalize
 *
 * Return: pointer
 */

char *cap_string(char *d)
{
	int c, e;
	char seperators[] = " \t\n,;.!?\"(){}";

	for (c = 0; d[c] != '\0'; c++)
	{
		if (d[c] >= 'a' && d[c] <= 'z')
			d[c] = d[c] - 'a' - 'A';
	
	}
	for (e = 0; seperators[e] != '\0'; e++)
	
		if (d[c] == seperators[e] && d[c] >= 'a' && d[c] <= 'z')
			d[c] = d[c] - 'a' - 'A';

	return (d);
}
