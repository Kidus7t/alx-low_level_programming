#include "main.h"

/**
*free_grid- freeing a 2d grid
*@grid: pm
*@height: pm
*/

void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
	free(grid[i]);
free(grid);
}
