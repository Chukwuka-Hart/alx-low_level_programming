#include "main.h"

/**
 * print_alphabet - void function that prints lower case alphabet
 *
 * Return: 0
 */

void print_alphabet(void)
{
char lowercase = 'a';

while (lowercase <= 'z')
{
_putchar(lowercase);
lowercase++;
}
_putchar('\n');
}
