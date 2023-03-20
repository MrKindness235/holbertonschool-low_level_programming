#ifndef _FILE_NAME_H_
#define _FILE_NAME_H_

/**
 * struct dog - Cutest animal around
 *
 * @name: Name of the doggy.
 * @age: Age of the doggo.
 * @owner: Owner of the Pupper.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
