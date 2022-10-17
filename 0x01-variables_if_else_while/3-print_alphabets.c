#include <stdio.h>

/**
 * main - Entry gate
 *
 * Details: Print alphabet in lower and upper case with newline
 *
 * Return: 0 (success)
 */

int main(void)
{
char lowercase = 'a';
char uppercase = 'A';

for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
{
putchar(lowercase);
}
for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
{
putchar(uppercase);
}
putchar('\n');

return (0);
}
