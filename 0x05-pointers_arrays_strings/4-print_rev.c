#include "main.h"

/**
 * print_rev - function that prints a string in reverse
 *
 * @s: pointer
 */

void print_rev(char *s)
{
	int rev;

	rev = 0;
	while (s[rev])
	{	
		s[rev] != '\0';
		rev++;
	}
	while (rev >= 0)
	{
		_putchar(s[rev]);
		rev--;
	}

	_putchar('\n');
}
