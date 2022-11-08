#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * main - adds positive numbers
 *
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: 0 if all postive number, 1 or error if no number
 */

int main(int argc, char *argv[])
{
	int x, i, len;
	int sum = 0;
	char *symbols;


	if (argc > 1)
	{
		for (x = 1; x < argc; x++)
		{
			symbols = argv[x];
			len = strlen(symbols);

			for (i = 0; i < len; i++)
			{
				if (isdigit(symbols[i]) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[x]);
		}
		printf("%d\n", sum);
	}

	else 
	{
		printf("0\n");
	}
	
	return (0);
}
