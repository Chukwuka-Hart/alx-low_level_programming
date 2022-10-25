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
	int length;

	for (length = 0; length < 10; length++)
	{
		length = _strlen(s);
	}


	return (length);
}
