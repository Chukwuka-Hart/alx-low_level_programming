#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function that prints a struct
 *
 * @d:pointer to struct dog to print
 */

void print_dog(struct dog *d)
{

	if (d == NULL)
		d = malloc(sizeof(struct dog));
	{
	printf("Name: %s\n", (d->name) ? d->name : "(nil)");
	printf("Age: %f\n", (d->age) ? d->age : );
	printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}
