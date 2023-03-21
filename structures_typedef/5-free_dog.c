#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - It frees them all.
 *
 * Return: Void.
 *
 * @d: Dog(_t) to be freed.
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
