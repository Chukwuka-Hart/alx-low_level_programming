#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concats two strings
 *
 * @s1: str to concat
 * @s2: str to concat to s1
 *
 * Return: NULL on failure
 * 	otherwise points to a new allocated space in memory
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int x;
	int len = 0;
	int i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (x = 0; s1[x] && s2[x]; x++)
	{
		len++;
	}

	concat = malloc(sizeof(char) * len);

	if (concat == NULL)
		return (NULL);

	for (x = 0; s1[x]; x++)
	{
		concat[i++] = s1[x];
	}

	for (x = 0; s2[x]; x++)
	{
		concat[i++] = s2[x];
	}

	return (concat);
}
