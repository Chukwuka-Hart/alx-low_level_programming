#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 *
 * @s: char to check
 *
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	int x;

	if (*s == '\0')
	{
		return (0);
	}

	else
	{
		x = _strlen_recursion(s + 1);
	}

	return (x);
}
