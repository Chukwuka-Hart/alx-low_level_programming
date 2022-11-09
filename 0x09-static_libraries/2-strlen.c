#include "main.h"

/**
 * _strlen - returns the lenth if a string
 *
 * @s: string
 *
 * Return: strlen
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
	{
		length++;
	}


	return (length);
}
