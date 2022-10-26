#include "main.h"

/**
 * puts_half - a function that prints half of a string
 *
 * @str: string input
 */

void puts_half(char *str)
{
	int d;

	for (d = 0; str[d] != 0; d++)
	{
		d++;
	}
	for (d = d / 2; str[d] != 0; d++)
	{
		_putchar(str[d]);
	}
}
