#include "main.h"

/**
 * div_check - check if a number is divisible
 *
 * @n: int to check
 * @division: int divider
 */

int div_check(int n, int division)
{
	if (n % division == 0)
		return (0);

	if (division == n / 2)
		return (1);

	return (div_check(n, division + 1));
}


/**
 * is_prime_number - detects prime number or not
 *
 * @n: input int
 *
 * Return: 1 if prime number, 0 otherwise
 */

int is_prime_number(int n)
{
	int division = 0;

	if (n <= 1)
		return (0);

	if (n >=2 && n <= 3)
		return (1);

	return (div_check(n, division));
}
