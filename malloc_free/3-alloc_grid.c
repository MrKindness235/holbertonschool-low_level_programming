#include "main.h"

/**
 */

int **alloc_grid(int width, int height)
{
	int **p;
	int a = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(int**) * (height + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	while (a <= height)
	{
		p[a] = malloc(sizeof(int) * (width + 1));
		if (p[a] == NULL)
		{
			return (NULL);
		}
		a++;
	}
	return (p);
}
