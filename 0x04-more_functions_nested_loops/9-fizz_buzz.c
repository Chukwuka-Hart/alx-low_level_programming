#include "main.h"
#include <stdio.h>

/**
 * main - fizz buzz entry
 *
 * Return: 0
 */

int main(void)
{
	int d = 1;

	while ( d <= 100)
	{
		if (d % 3 == 0 && d % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (d % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (d % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", d);
		}
		d++;
	}
	printf("Buzz\n");

	return (0);
}
