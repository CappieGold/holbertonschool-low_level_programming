#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - Write a function that returns a pointer to a 2 dimensional
 * array of integers.
 * @width: width of grid
 * @height: height of grid
 * Return: pointer to a 2 dimensional array of int
*/

int **alloc_grid(int width, int height)
{
	int **grid;
	int indexWidth = 0;
	int indexHeight = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int *) * height);

	if (!grid)
	{
		return (NULL);
	}

	for (indexHeight = 0; indexHeight < height; indexHeight++)
	{
		grid[indexHeight] = malloc(sizeof(int) * width);

		if (!grid[indexHeight])
		{
			for ( ; indexHeight >= 0; indexHeight--)
			{
				free(grid[indexHeight]);
			}

			free(grid);
			return (NULL);
		}
	}

	for (indexHeight = 0; indexHeight < height; indexHeight++)
	{
		for (indexWidth = 0; indexWidth < width; indexWidth++)
		{
			grid[indexHeight][indexWidth] = 0;
		}
	}
	return (grid);
}
