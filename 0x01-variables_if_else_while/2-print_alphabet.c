#include <stdio.h>

/**
 * main - Entry gate
 *
 * Details: Print alphabet in lowercase with newline
 *
 * Return: 0(success)
 */

int main(void)
{
char lowercase = 'a';

while (lowercase <= 'z')
{
putchar(lowercase);
lowercase++;
putchar('\n');
}

return (0);
}
