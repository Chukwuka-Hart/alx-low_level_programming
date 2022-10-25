#include "main.h"

/**
 * _puts - prints a string
 *
 * @str: pointer input
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
}
