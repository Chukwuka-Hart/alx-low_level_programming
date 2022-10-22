#include "main.h"

/**
 * _isupper - is a function that check uppercase
 * @c: is the character to check
 * Return: 1 if c is uppercase otherwise 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
