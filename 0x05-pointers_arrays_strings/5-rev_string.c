#include "main.h"

/**
 * rev_string - function that reverses a string
 *
 * @s: input string
 */

void rev_string(char *s)
{
	int length = _strlen(s);
	int mid = length / 2;
	char d;
	int i;

	for (i = 0; i < mid; i++)
	{
		d = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = d;
	}
}
