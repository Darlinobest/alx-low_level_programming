#include "dog.h"

/**
 * init_dog - initializes a variable of type struct
 * @d: pointer to the struct dog to be initialized
 * @name: name of the dog
 * @owner: owner of the dog
 * @age: age of the dog
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->owner = owner;
	d->age = age;
}
