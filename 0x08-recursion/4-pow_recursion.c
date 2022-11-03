#include "main.h"

/**
 * _pow_recursion -  function that  returns raised to the power
 *
 * @x: int to check
 * @y: int to check
 *
 * Return: 0 if lower, otherwise -1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	else if (y == 0)
	{
		return (1);
	}

	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
