#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural number
 *
 * @n: number
 */

void print_to_98(int n)
{
while (n < 98)
{
printf("%d, ", n);
n++;
}
while (n > 98)
{
printf("%d, ", n);
n--;
}
printf("\n");
}
