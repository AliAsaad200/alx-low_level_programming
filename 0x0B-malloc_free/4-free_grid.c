#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* free_grid - integer is positive or negative
* @grid: first integer
* @height: first integer
* Return: 0
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
