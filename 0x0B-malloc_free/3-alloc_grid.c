#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns pointer to a 2d array of integers
 * @width: stores width
 * @height: stores the height
 * Return: On success grid otherwise NULL is returned
 * if grid is equal to null or height and width are
 * equal 0 or negative.
 */

int **alloc_grid(int width, int height)
{
	int o, k;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = (int **) malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}

	for (o = 0; o < height; o++)
	{
		grid[o] = (int *) malloc(width * sizeof(int));
		if (grid[o] == NULL)
		{
			for (k = 0; k < o; k++)
			{
				free(grid[k]);
			}
			free(grid);
			return (NULL);
		}
	}
	for (o = 0; o < height; o++)
	{
		for (k = 0; k < width; k++)
		{
			grid[o][k] = 0;
		}
	}
	return (grid);
}
