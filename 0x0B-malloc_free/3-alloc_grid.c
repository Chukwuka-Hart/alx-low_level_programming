#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of int
 *
 * @width: width of 2D array
 * @height: height of 2D array
 *
 * Reurn: NULL on fail or 0 or negaive
 *	otherwise - a pointer to 2D array
 */

int **alloc_grid(int width, int height)
{
	int **alloc;
	int h, w;

	if (width <= 0 || height <= 0)
		return (NULL);

	alloc = malloc(sizeof(int *) * height);

	if (alloc == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		alloc[h] = malloc(sizeof(int) * width);

		if (alloc[h] == NULL)
		{
			for (; h >= 0; h--)
				free(alloc[h]);

			free(alloc);

			return (NULL);
		}
	}

	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
			alloc[h][w] = 0;
	}

	return (alloc);
}
