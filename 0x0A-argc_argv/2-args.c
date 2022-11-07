#include <stdio.h>
#include "main.h"

/**
 * main - prints all arg it receives
 *
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
	printf("%s\n", argv[x]);
	}

	return (0);
}
