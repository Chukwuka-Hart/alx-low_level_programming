#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that prints number
 *
 * @separator: input strint to be printed btw numbers
 * @n: number of ints in parameter
 * @...: other parameter
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int x;

	va_start(ap, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(ap, int));

		if (x != n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(ap);
}
