#include <stdio.h>

/**
 * main - entry gate
 *
 * codes
 *
 * Return: 0
 */

int main(void)
{
int d = 0;
int e;
int f;

for (d = 0; d <= 7; d++)
{
for (e = d + 1; e <= 8; e++)
{
for (f = e + 1; f <= 9; f++)
{
putchar(d + '0');
putchar(e + '0');
putchar(f + '0');
if (d == 7 && e == 8 && f == 9)
break;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
