#include "main.h"

/**
 * print_rev - function that prints a string in reverse
 *
 * @s: pointer
 */

void print_rev(char *s)
{
	int rev;
	int i;

	rev = 0;
	while (i = 0; s[i] != '\0'; i++)
	{	
		rev++;
	}
	for (i = rev - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
