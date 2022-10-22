#include <stdio.h>

/**
 * main - Entry
 *
 * Return: 0
 */

int main(void)
{
	long num = 612852475143;
	long div = 2;
	long prime = 0;

	while (num != 1)
	{
		if (num % div == 0)
		{
			num = num / div;
			prime = div;
		}
		div += 1;
	}
	printf("%ld\n", prime);
	return (0);
}
