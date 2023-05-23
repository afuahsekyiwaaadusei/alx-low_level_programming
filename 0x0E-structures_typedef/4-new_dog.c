#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: struct dog.
 * if fails, returns NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *Dog;

	Dog = malloc(sizeof(struct dog));
	if (!Dog)
	{
		free(Dog);
		return (NULL);
	}
	Dog->name = name;
	Dog->age = age;
	Dog->owner = owner;
	return (Dog);
}
