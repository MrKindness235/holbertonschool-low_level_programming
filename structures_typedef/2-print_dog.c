#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Prints given dog-profile.
 *
 * Return: Void.
 *
 * @d: Given structure (dog-profile).
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			printf("Name: %s\n", d->name);
		}
		else
		printf("Name: (nil)\n");
		if (d->age < 0)
		{
			printf("Age: (nil)\n");
		}
		else
		printf("Age: %f\n", d->age);
		if (d->owner != NULL)
		{
			printf("Owner: %s\n", d->owner);
		}
		else
		printf("Owner: (nil)\n");
	}
}
