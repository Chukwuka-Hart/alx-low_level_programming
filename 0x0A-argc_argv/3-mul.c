#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies two int
 *
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x;
	int sum = 1;

	if (argc > 2)
	{
		for (x = 1; x < argc; x++)
		{
			sum *= atoi(argv[x]);
		}
		printf("%d\n", sum);
	}

	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
