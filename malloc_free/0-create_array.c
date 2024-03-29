#include "main.h"

/**
 * *create_array - A handy function that "creates an  array".
 *
 * Return: 0 for a task well performed, null for error.
 *
 * @size: The length of the soon to be array.
 * @c: The character to be inside the array.
 *
 */

char *create_array(unsigned int size, char c)
{
	int s = size;
	char *p;
	int i;

	if (s == 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(c) * s);
	if (p == NULL)
	{
		exit(1);
	}
	for (i = 0; i != s; i++)
	{
		p[i] = c;
	}
	return (p);
}
