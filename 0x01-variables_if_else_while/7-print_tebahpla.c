#include <stdio.h>

/**
 * main - Entry gate
 *
 * Details: Print alphabet lowercase backwards
 *
 * Return: 0 (success)
 */

int main(void)
{
char reverseletters = 'z';

for (reverseletters = 'z'; reverseletters >= 'a'; reverseletters--)
{
putchar(reverseletters);
}
putchar('\n');

return (0);
}
