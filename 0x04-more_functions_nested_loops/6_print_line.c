#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *
 * Return: void
 */

void print_line(int n)
{
	int d = 0;

	if (n > 0)
	{
		while (d < n)
		{
			_putchar('_');
		d++;
		}
	}
	_putchar('\n');
}
