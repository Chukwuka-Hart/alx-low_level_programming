#include <stdio.h>

/* constructors */
void _construct(void) __attribute__ ((constructor));

/**
 * _construct - prints a message
 *
 * Return: nothing
 */

void _construct(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
