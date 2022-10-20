#include <stdio.h>

/**
 * main - prints the sum of the multiplication
 *
 * Return: Always 0(success)
 */
int main(void)
{
int g, sum = 0;

for (g = 0; g < 1024; g++)
{
if ((g % 3) == 0 || (g % 5) == 0)
sum = sum + g;
}

printf("%d\n", sum);

return (0);
}
