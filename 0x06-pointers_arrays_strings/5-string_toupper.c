#include "main.h"

/**
 * string_toupper - changes all lowercase to uppercase
 *
 * @d: string to check
 *
 * Return: Resulting string
 */

char *string_toupper(char *d)
{
	int c;

	for (c = 0; d[c] != '\0'; c++)
	{
		if (d[c] >= 'a' && d[c] <= 'z')
			d[c] = d[c] - 'a' + 'A';
	}

	return (d);
}
