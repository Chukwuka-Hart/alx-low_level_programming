#include  <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - generates random valid password
 *
 * Return: zero
 */

int main(void)
{
	int d;
	char x;

	srand(time(NULL));
	while (d <= 2645)
	{
		x = rand() % 128;
		d += x;
		putchar(x);
	}
	putchar(2772 - d);
	return (0);
}
