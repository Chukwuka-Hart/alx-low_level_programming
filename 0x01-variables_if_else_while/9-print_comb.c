#include <stdio.h>

/**
 * main - Entry gate
 *
 * Details: Print numbers seperated by space and comma
 *
 * Return: 0 (success)
 */

int main(void)
{
int d = 0;

while (d <= 9)
{
putchar(d + '0');
d = d + 1;
if (d <= 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
