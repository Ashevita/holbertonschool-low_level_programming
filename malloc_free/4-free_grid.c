#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - function
 * @grid: pointeur
 * @height: variable
 * Return: char
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
