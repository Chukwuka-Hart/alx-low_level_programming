#include "main.h"

/**
 * _memset - function that fills  memory with a constant byte
 *
 * @s: with the constant byte of b
 * @b: memory area pointer
 * @n: bytes of the memory area pointed to by s
 *
 * Return: a pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	int x;

	for  (x = 0; x < n; x++)
	{
		s[x] = b;
	}

	return (s);
}
