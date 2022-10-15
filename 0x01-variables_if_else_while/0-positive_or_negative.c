#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry gate
 *
 * code blocks
 *
 * Return: 0
 */

int main(void)
{
int n;

srand(time(0));

n = rand() - RAND_MAX / 2;

if (n > 0)
{
printf("n is positive\n");
}
else if
(n == 0);
{
printf("n is zero\n");
}
if
(n < 0);
{
printf("n is negative\n");
}

return (0);
}
