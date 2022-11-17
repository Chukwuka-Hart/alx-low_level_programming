#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: name to print
 * @f: pointer to functio
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		f(name);
}
