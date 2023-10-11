#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function to initialise a dog struct
 * @d: point to the dog struct to be initialised
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
