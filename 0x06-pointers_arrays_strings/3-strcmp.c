#include "main.h"

/**
 * strcmp - compares two strings
 *
 * @s1: pointer string to compare
 * @s2: second pointer string to compare
 *
 * Return: pointer value
 */

int _strcmp(char *s1, char *s2)
{
	int d;

	for (d = 0; s1[d] = != '\0' && s2[d] != '\0'; d++)
	{
		if (s1[d] != s2[d])
		return (s1[d] - s2[d]);
	}
}
