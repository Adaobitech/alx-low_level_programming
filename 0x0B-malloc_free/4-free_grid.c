#include "main.h"

/**
 * free_grid - frees 2 dimentional grid
 * @grid: multidimensional array of integers
 * @heig
 * @height: height of grid
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
