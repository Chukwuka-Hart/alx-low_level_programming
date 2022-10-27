#include "main.h"

/**
 * reverse_array - reverses the content of an array of ints
 *
 * @a: an array of ints
 * @n: the number of elements to swap
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int x, y;

	while (x < n)
	{
		y = a[n];
		a[n] = a[i];
		a[i] = y;
		i++;
		n--;
	}
}
