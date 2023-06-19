#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable
 * @d: pointer
 * @name: name init
 * @age: age init
 * @owner: owner init
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
