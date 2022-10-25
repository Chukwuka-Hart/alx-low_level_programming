#include "main.h"

/**
 * rev_string - function that reverses a string
 *
 * @s: input string
 */

void rev_string(char *s)
{
	int length = 0;
	int d = 0;
	int i;

	for (i = 0; s[i] != '\0')
	{
		d++;
	}

	for (i = 0; i < d; i++)
	{
		length = s[i];
		s[i] = s[d - 1];
		s[d - 1] = length;
		d--;
	}
}
