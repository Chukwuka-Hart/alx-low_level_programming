#include <stdio.h>

/**
 * main - Entry gate
 *
 * Details: Print number all base 10 number beginning with 0
 *
 * Return: 0 (success)
 */

int main(void)
{
int digit = 0;

for (digit = 0; digit < 10; digit++)
{
printf("%d", digit);
}
printf("\n");

return (0);
}
