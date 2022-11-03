#include "main.h"

/**
 * _findrt - finds the natural square root of an int
 *
 * @x: int to be tested
 * @y: int to find
 *
 * Return: if the int has natural sqrt 1, otherwise -1
 */

int _findrt(int x, int y)
{
	if ((x * x) == y)
		return (x);
	if (y == x / 2)
		return (-1);
	return (_findrt(y, x + 1));
}


/**
 * _sqrt_recursion - returns the square root of a number
 *
 * @n: int
 *
 * Return: -1 if no sqrt
 */

int _sqrt_recursion(int n)
{
	return (_findrt(n, y));
}