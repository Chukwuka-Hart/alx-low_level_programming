#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of int
 *
 * @min: min int
 * @max: max int
 *
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);

	arr = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max i++)
		arr[i] = min++;

	return (arr);
}
