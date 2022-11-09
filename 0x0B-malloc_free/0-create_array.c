#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and
 *		initializes it with  a specific char
 *
 * @size: the size of array to initialize
 * @c: the char to initialize the array with
 *
 * Return: NULL - if size == 0
 *	otherwise - a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
	{
		arr[x] = c;
	}

	return (s);
}
