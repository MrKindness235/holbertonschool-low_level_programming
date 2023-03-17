#include "main.h"

/**
 * **alloc_grid - Creates a GRID using POINTERS
 * and MALLOC. REJOICE.
 *
 * Return: MAGIC (grid pointer).
 *
 * @width: Width of the grid.
 * @height: Height of the grid.
 */

int **alloc_grid(int width, int height)
{
	int **p;
	int a = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(int *) * height);
	if (p == NULL)
	{
		return (NULL);
	}
	while (a < height)
	{
		p[a] = malloc(sizeof(int) * width);
		if (p[a] == NULL)
		{
			return (NULL);
		}
		a++;
	}
	return (p);
}
