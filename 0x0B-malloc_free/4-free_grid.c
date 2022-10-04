#include "main.h"

/**
 * free_grid - function to free
 * @grid: the memory allocated
 * @height: the height
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int count;

	for (count = 0; count < height; count++)
	{
		free(grid[count]);
	}
	free(grid);
}
