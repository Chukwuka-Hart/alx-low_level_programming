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
	int d;

	if (min > max)
		return (NULL);

	d = max - min;
	arr = malloc((d + 1) * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= d; i++)
		arr[i] = min++;

	return (arr);
}
