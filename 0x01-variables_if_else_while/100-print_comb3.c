#include <stdio.h>

/**
 * main - entry gate
 *
 * code
 *
 * Return: 0
 */

int main(void)
{
int d = 0;
int e;

for (d = 0; d < 9; d++)
{
for (e = d + 1; e <= 9; e++)
{
putchar(d + '0');
putchar(e + '0');
if (d == 8 && e == 9)
break;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
