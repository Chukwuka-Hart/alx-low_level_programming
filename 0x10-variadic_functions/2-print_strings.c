#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 *
 * @separator: the string to be printed btw the strings
 * @n: number of string passed to the function
 * @...: other parameters
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int x;
	char *string;

	va_start(ap, n);

	for (x = 0; x < n; x++)
	{
		string = va_arg(ap, char*);

		if (string == NULL)
			printf("%s", "(nil)");
		else
			printf("%s", string);

		if (x != n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(ap);
}
