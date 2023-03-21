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
	int c = 0;

	if (str != NULL)
	{
	for (c = 0; str[c] != '\0'; c++)
	dup = malloc(sizeof(char) * c + 1);
		if (dup == NULL)
		{
			return (NULL);
		}
		for (c = 0; str[c] != '\0'; c++)
		{
			dup[c] = str[c];
		}
		dup[c] = '\0';
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
	dog_t *nd;

	nd = malloc(sizeof(dog_t));
	if (nd == NULL)
	{
		return (NULL);
	}
	if (name != NULL)
	{
		nd->name = cad_str(name);
		if (nd->name == NULL)
		{
			return (NULL);
		}
	}
	else
	{
		free(nd);
		return (NULL);
	}
	if (owner != NULL)
	{
		nd->owner = cad_str(owner);
		if (nd->owner == NULL)
		{
			return (NULL);
		}
	}
	else
	{
		free(nd->name);
		free(nd);
		return (NULL);
	}
	nd->age = age;
	return (nd);
}
