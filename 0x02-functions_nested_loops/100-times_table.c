#include "main.h"

/**
 * prints_times_table - Entry gate
 *
 * @n: input value
 */

void print_times_table(int n)
{
int c, d, e;

if (n >= 0 && n <= 15)

{

for (c = 0; c <= n; c++)

{

_putchar('0');

for (d = 1; d <= n; d++)
{

_putchar(',');

_putchar(' ');

e = c * d;

if (e <= 99)

_putchar(' ');

if (e <= 9)

_putchar(' ');

if (e >= 100)
{
_putchar((e / 100) + '0');
_putchar((e / 10) % 10 +  '0');
}
else if (e <= 99 && e >= 10)
{

_putchar((e / 10) + '0');
}

_putchar((e % 10) + '0');
}
 _putchar('\n');
}
}
}
