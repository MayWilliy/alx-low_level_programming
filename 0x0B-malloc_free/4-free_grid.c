#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_grid- allocates a grid, make space and free space
 * @grid: takes in the width of the grid
 * @height: the height
 * Return: free grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}

