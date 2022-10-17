#include <stdio.h>

/**
 * main - Entry gate
 *
 * Details: Print alphabet in lowercase with newline except for q and e
 *
 * Return: 0 (success)
 */

int main(void)
{
char lowercase = 'a';

while (lowercase <= 'z')
{
if (lowercase != 'e' && lowercase != 'q')
putchar(lowercase);
lowercase++;
}
putchar('\n');

return (0);
}
