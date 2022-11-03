#include "main.h"

/**
 * fatorial - a function that returns the factorial
 *
 * @n: integer
 *
 * Return: 0 if lower, -1 if error
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n == 0)
	{
		return (1);
	}

	else
	{
		return (n * factorial(n - 1));
	}
}
