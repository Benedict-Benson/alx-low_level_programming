#include "main.h"
#include <stdio.h>
#include<stdlib.h>

/**
 * free_grid - function to free memory from grid
 * @grid: grid to free;
 * @height: height of grid;
 * Return: none
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; ia+)
		free(grid[a]);
	free(grid);
}
