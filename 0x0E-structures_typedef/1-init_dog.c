#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize struct dog
 * @d: give the adress of the variable
 * @name: name of the poppy
 * @age: age of the poppy
 * @owner: owner of the poppy
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
