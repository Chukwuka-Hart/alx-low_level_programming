#include "main.h"

/**
 * print_rev - function that prints a string in reverse
 *
 * @s: pointer
 */

void print_rev(char *s)
{
	int arr;
	int rev;

	arr = s[rev];
	for (rev = arr - 1; rev >= 0; rev--)
	{
		_putchar(s[rev]);
	}

	_putchar('\n');
}
