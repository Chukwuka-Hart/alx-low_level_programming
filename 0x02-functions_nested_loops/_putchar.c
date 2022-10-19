#include "main.h"
#include <unistd.h>

/**
 * _putchar - function will write d to standard output
 *
 * Return: 1 (success), otherwise -1
 */

void _putchar(char d)
{
(write(1, &d, 1));
}
