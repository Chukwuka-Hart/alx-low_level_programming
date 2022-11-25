#include <stdio.h>

void _construct(void) __attribute__ ((constructor));

/**
 * construct - prints a message
 *
 * Return: nothing
 */

void _construct(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
