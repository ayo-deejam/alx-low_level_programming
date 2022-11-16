#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function to initialise a variable of type struct dog
 * @dog1: variable name
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner of dog
 */

void init_dog(struct dog *dog1, char *name, float age, char *owner)
{
	if (dog1 == NULL)
	{
		dog1 = malloc(sizeof(struct dog));
	}
	dog1->name = name;
	dog1->age = age;
	dog1->owner = owner;
}
