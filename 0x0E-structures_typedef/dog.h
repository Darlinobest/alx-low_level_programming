#ifndef _DOG_H
#define _DOG_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
