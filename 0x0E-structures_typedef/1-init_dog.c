#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 *
 * @d: pointer to dog structure
 * @name: dog name to initialize
 * @age: dog age to initialize
 * @owner: dog owner to initialize
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));

	if(d == NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
