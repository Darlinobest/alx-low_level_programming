#ifndef _DOG_H
#define _DOG_H

#include <stdlib.h>

/**
 * struct dog - structure containing information of a dog
 * @name: Dog name
 * @owner: Dog owner
 * @age: age of the dog
 */

typedef struct dog
{
	char *name;
	char *owner;
	float age;
} my_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
