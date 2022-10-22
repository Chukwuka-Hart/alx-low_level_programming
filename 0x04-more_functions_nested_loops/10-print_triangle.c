#include "main.h"

/**
 * print_triangle -prints triangle with #
 *
 * @size: is thesize to draw
 */

void print_triangle(int size)
{
	int y = 1, z;

	while (y <= size && size > 0)
	{
		z = 0;
		while (z < size - y)
		{
			_putchar(' ');
			z++;
		}
		z = 0;
		while (z < y)
		{
			_putchar('#');
			z++;
		}

		_putchar('\n');
		y++;
	}
	if (y == 1)
		_putchar('\n');
}
