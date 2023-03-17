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
	int h = height;

	if (grid == NULL || height <= 0)
	{
		return;
	}
	while (h >= 0)
	{
		free(grid[h]);
		h--;
	}
	free(grid);
}
