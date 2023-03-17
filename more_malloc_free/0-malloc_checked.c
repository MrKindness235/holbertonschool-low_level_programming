#include "main.h"

/**
 * malloc_checked - Returns pointer to newly allocated memory!
 *
 * Return: Pointer to newly allocated memory.
 *
 * @b: Lenght of said newly allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	if (b <= 0)
	{
		return (0);
	}
	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
