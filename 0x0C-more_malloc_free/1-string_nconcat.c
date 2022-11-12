#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concat two  strings
 *
 * @s1: first str
 * @s2: second str
 *
 * Return: 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *x;
	unsigned int si1 = 0, si2 = 0, i;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[si1] != '\0')
	{
		si1++;
	}
	while (s2[si2] != '\0')
	{
		si2++;
	}

	if (n > si2)
		n = si2;

	x = malloc((si1 + n + 1) * sizeof(char));

	if (x == NULL)
		return (0);

	for (i = 0; i < si1; i++)
	{
		x[i] = s1[i];
	}
	for (; i < (si1 + n); i++)
	{
		x[i] = s2[i - si1];
	}

	x[i] = '\0';
	return (x);
}
