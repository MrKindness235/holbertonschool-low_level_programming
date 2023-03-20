#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes your own very dog profile!
 *
 * Return: Void.
 *
 * @d: Given pointer to direct initialization.
 * @name: Given name of the pupper.
 * @age: Given age of the cutest thing on earth.
 * @owner: Given owner of the most lotal boi or gal.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
