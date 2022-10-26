#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints elements of an array
 *
 * @a: pointer input
 * @n: int input
 */

void print_array(int *a, int n)
{
	int d;

	for (d = 0; d < n; d++)
	{
		printf("%d", a[d]);
		if (d < n - 1)
			printf(", ");
	}
	putchar('\n');
}
