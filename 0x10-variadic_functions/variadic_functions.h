#ifndef VFUNCTION
#define VFUNCTION

#include <stdarg.h>

/**
 * struct printer - struct type defining a printer
 *
 * @print: funtion pointer to a function that prints
 * 	data type matching symbols
 *
 * @symbol: representing a data type
 */

typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);
} printer_d;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
