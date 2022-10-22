#include "main.h"
#include <unistd.h>

/**
 * _putchar - funtion will write d to standard output
 *
 * Return: 1 (success)
 */

void _putchar(char d)
{
	write(1, &d, 1);
}
