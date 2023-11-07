#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Write a function that frees a 2 dimensional grid previously
 * created by your alloc_grid function.
 * @grid: 2 dimensional array
 * @height: height of array
*/

void free_grid(int **grid, int height)
{
	int index = 0;

	for (index = 0; index < height; index++)
	{
		free(grid[index]);
	}
	free(grid);
}
