#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function to initialise a variable of type struct dog
 * @dog1: variable name
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
