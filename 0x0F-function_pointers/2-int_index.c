#include "function_pointers.h"

/**
 * int_index - ...
 * @array: ...
 * @size: ...
 * @cmp: ...
 *
 * Return: ...
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (x < size)
			{
				if (cmp(array[x]))
					return (x);

				x++;
			}
		}
	}

	return (-1);
}
