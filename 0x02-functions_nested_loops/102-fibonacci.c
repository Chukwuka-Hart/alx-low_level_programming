#include <stdio.h>

/**
 * main - Prints first 50 fib nums
 *
 * Return: 0
 */
int main(void)
{
int c;
unsigned long fib1 = 0;
unsigned long fib2 = 1;
unsigned long sum;

for (c = 0; c < 50; c++)
{
sum = fib1 + fib2;
printf("%lu", sum);

fib1 = fib2;
fib2 = sum;

if (c == 49)
printf("\n");
else
printf(", ");
}

return (0);
}
