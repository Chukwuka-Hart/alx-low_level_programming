#include "function_pointers.h"

/**
 * array_iterator - a function given as parameter
 *
 * @array: array to exec func on
 * @size: is the size of array
 * @action: a pointer to the func needed
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array && action)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
