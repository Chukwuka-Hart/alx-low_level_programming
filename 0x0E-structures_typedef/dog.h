#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Dog details
 *
 * @name: dog's name
 * @owner: dog's owner
 * @age: dog's age
 *
 * Description: Dog details
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
