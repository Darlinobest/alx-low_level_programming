#include "dog.h"


dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL || !(name) || !(owner))
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->name = malloc(strlen(name) + 1);
	new_dog->owner = malloc(strlen(owner) + 1);



	if (new_dog->name == NULL)
	{
		free(new_dog->name);
		return (NULL);
	}
	strcpy(new_dog->name, name);

	if (new_dog->owner == NULL)
	{
		free(new_dog->owner);
		return (NULL);
	}
	strcpy(new_dog->owner, owner);
	new_dog->age = age;

	return (new_dog);
}
