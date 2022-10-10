#include "dog.h"

#define NULL (void *)0

/**
 * init_dog - initialize a variable of type struct dog
 * @d: a pointer to struct dog
 * @name: name of the dog
 * @age: how old the dog is
 * @owner: the name of the dog's owner
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
