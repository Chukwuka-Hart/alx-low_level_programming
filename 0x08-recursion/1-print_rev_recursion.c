#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 *
 * @c: char to rev
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
