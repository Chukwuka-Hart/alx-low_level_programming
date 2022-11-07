#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments
 * 
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x;
	(void) argv;

	for (x = 0; x < argc; x++)
	{
		printf("%d\n", x);
	}

	return (0);
}
