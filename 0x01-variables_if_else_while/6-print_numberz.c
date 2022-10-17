#include <stdio.h>

/**
 * main - Entry gate
 *
 * Details: Print all single digit from 0 - 10 using putchar
 *
 * Return: 0
 */

int main(void)
{
int digit = 0;

while (digit < 10)
{
putchar(digit + '0');
digit = digit + 1;
}
putchar('\n');

return (0);
}
