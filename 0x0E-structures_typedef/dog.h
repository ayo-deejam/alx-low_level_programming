#ifndef DOG_H
#define DOG_H

/**
 * struct dog - creates a struct of a dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Name of dog owner
 *
 * Description: This is part of ALX C Programming course
 */
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
