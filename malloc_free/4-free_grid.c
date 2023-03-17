#include "main.h"

/**
* free_grid - Frees given grid.
*
* Return: NULL.
*
* @grid: Given grid.
* @height: Given height of said grid.
*/

void free_grid(int **grid, int height)
{
	int h = 0;

	if (grid == NULL || h <= 0)
	{
		exit(1);
	}
	while (h < height)
	{
		free(grid[h]);
		h++;
	}
	free(grid);
}
