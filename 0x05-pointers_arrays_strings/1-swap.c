#include "main.h"

/**
 * swap_int - swaps the value of two int
 *
 * @a: pointer to swap
 * @b: second pointer to swap
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
