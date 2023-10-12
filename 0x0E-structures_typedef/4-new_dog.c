#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - function to create new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 * Return: pointer to the new dog, else NULL when it fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	new_dog = malloc(sizeof(*new_dog));

	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_dog->name = strdup(name);

	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = strdup(owner);
	if (new_dog->name == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	new_dog->age = age;

	return (new_dog);
}
