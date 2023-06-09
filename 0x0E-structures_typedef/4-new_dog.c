#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog -  creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: new_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new_dog;

	new_dog = malloc(sizeof(struct dog));

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;

	return (new_dog);
}
