#include "main.h"

/**
 * print_last_digit - prints last int
 *
 * @c: is the int to investigate
 *
 * Return: the int investigated
 */

int print_last_digit(int c)
{
int d = c % 10;

if (c < 0)
d = -1 * d;

_putchar(d + '0');

return (d);
}
