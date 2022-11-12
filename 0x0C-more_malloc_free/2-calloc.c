#include "main.h"
#include <stdlib.h>

/**
 * _calloc - ...
 *
 * @nmemb: ...
 * @size: ...
 *
 * Return: ...
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int c = 0;
	int s = 0;
	char *x;

	if (nmemb == 0 || size == 0)
		return (NULL);

	s = nmemb * size;
	x = malloc(s);

	if (x == NULL)
		return (NULL);

	while (c < s)
	{
		x[c] = 0;
		c++;
	}

	return (x);
}
