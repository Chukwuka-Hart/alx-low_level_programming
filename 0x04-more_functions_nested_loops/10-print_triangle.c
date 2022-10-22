#include "main.h"

/**
 * print_triangle -prints triangle with #
 *
 * @size: is thesize to draw
 */

void print_triangle(int size)
{
	int x, y, z;

	if (size <= 0)
		_putchar('\n');
	for (y = 1; y <= size; y++)
	{
		for (z = 1; z <= (size - y); z++)
		{
		_putchar(' ');
		}
		for (x = 1; x <= y; x++)
		{
			_putchar('#');
			_putchar('\n');
		}
	}
}
