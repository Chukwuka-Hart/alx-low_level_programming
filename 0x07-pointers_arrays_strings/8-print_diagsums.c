#include "main.h"

/**
 * print_diagsums - prints the sum of two diagonals of a square matrix
 *
 * @a: pointer start
 * @size: width of matrix
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int x, y, z, c = 0, b = 0;

	for (x = 0; x < size; x++)
	{
		z = (x * size) + x;
		c += *(a + p);
	}

	for (y = 0; y < size; y++)
	{
		z = (y * size) + (size - 1 - y);
		b += *(a + p);
	}
	printf("%d, %d\n", c, b);
}
