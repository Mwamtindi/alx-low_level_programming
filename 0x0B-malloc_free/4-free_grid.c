#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2d grid created by fxn alloc_grid
 * @grid: the adress of the 2d array
 * @height: height of the array
 * Return: Nothing.
 */

void free_grid(int **grid, int height)
{
	int f;

	for (f = 0; f < height; f++)
	{
		free(grid[f]);
	}
	free(grid);
}
