#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - init the struct dog
 * @d: the name of the struct
 * @name: name of the dog
 * @age: age
 * @owner: owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;

	if (d == NULL)
		exit(0);
}

