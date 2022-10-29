#include "main.h"

/**
 * print_number - function that prints an integer
 *
 * @n: int
 */

void print_number(int n)
{
	unsigned int x = n;

	if (n < 0)
	{
		_putchar('-');
		x = -x;
	}

	if (x / 10 > 0)
		printnumber(x / 10);

	_putchar((x % 10) + '0');
}
