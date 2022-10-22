#include "main.h"

/**
 * print_most_numbers - prints most numbers
 *
 * Return: 0
 */

void print_most_numbers(void)
{
	int d = 0;

	for (d = 0; d <= 9; d++)
	{
		if (d != 2 && d != 4)
		{
			_putchar(d);
		}
		_putchar('\n');
	}
}
