#include <stdio.h>

/**
 * main - Entry gate
 *
 * Details: Print number of base 16 in lowercase
 *
 * Return: 0 (success)
 */

int main(void)
{
int numbers = 0;
char letters = 'a';

for (numbers = 0; numbers < 10; numbers++)
{
putchar(numbers + '0');
}

for (letters = 'a'; letters <= 'f'; letters++)
{
putchar(letters);
}
putchar('\n');

return (0);
}
