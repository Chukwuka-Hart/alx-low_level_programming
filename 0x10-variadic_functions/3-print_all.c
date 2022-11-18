#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_all - function that prints anything
 *
 * @format: list of type of args passed in the function
 *
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list arg;
	char *tempo;
	int x = 0;

	va_start(arg, format);

	while (format == NULL)
	{
		printf("\n");
		return;
	}

	while (format[x])
	{
		switch (format[x])
		{
			case 'c':
				printf("%c", (char) va_arg(arg, int));
			break;

			case 'i':
				printf("%d", va_arg(arg, int));
			break;

			case 'f':
				printf("%f", (float) va_arg(arg, double));
			break;

			case 's':
				tempo = va_arg(arg, char*);

				if (tempo != NULL)
				{
					printf("%s", tempo);
					break;
				}
				printf("(nil)");
				break;
		}

		if ((format[x] == 'c' || format[x] == 'i' || format[x] == 'f' || format[x] == 's') && format[x + 1] != '\0')
			printf(", ");
		x++;
	}

	va_end(arg);
	printf("\n");
}
