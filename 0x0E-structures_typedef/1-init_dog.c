#include <stdlib.h>
#include "dog.h"

/**
 * init_dog -  initialize a variable of type
 * @d: stuct dog initialize
 * @name: pointer to char of dog name
 * @age: age of dog
 * @owner: pointer to char of dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
