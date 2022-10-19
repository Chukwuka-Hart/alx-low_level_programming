#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabet x10
 */

void print_alphabet_x10(void)
{
int c = 0;
char d = 'a';

for (c = 0; c < 10; c++)
{
for (d = 'a'; d <= 'z'; d++)
{
_putchar(d);
}

_putchar('\n');
}
}
