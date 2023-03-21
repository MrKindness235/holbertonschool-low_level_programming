#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * cad_str - Counts, Allocates and Duplicates a string.
 *
 * Return: Newly allocated string.
 *
 * @str: String to be counted and allocated.
 */

char *cad_str(char *str)
{
	char *dup;
	int c;

	if (str != NULL)
	{
	for (c = 0; str[c] != '\0'; c++)
	dup = malloc(sizeof(char) * c + 1);
		if (dup == NULL)
			return (NULL);
		for (c = 0; str[c] != '\0'; c++)
		{
			dup[c] = str[c];
		}
		return (dup);
	}
	else
		return (NULL);
}

/**
 * new_dog - Creates a new dog using given arguments.
 *
 * Return: NULL if fails; New dog if all goes as expected.
 *
 * @name: Given good boi/gal's name.
 * @age: Given pupper's age.
 * @owner: Given new doggy's owner.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int c = 0;
	dog_t *nd;

	nd = malloc(sizeof(dog_t));
	if (nd == NULL)
	{
		return (NULL);
	}
	if (name != NULL)
	{
		for (c = 0; name[c] != '\0'; c++)
		nd->name = malloc(sizeof(char) * c + 1);
		if (nd->name == NULL)
		{
			return (NULL);
		}
		for (c = 0; name[c] != '\0'; c++)
		{
			nd->name[c] = name[c];
		}
	}
	else
		return (NULL);
	if (owner != NULL)
	{
		for (c = 0; owner[c] != '\0'; c++)
		nd->owner = malloc(sizeof(char) * c + 1);
		if (nd->owner == NULL)
		{
			return (NULL);
		}
		for (c = 0; owner[c] != '\0'; c++)
		{
		nd->owner[c] = owner[c];
		}
	}
	else
		return (NULL);
	nd->age = age;
	return (nd);
}
