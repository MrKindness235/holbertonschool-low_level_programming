#include "main.h"

/**
 */

char *create_array(unsigned int size, char c)
{
	int s = size;
	char *p;
	int i;

	if (s == 0)
	{
		return ('\0');
	}
	p = malloc(sizeof(c) * s);
	if (!s)
	{
		return ('\0');
	}

	for (i = 0; i != s; i++)
	{
		s[i] = c;
	}

	return (p);
}
