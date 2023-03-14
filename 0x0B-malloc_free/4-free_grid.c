#include "main.h"

/**
 * free_grid - hello
 * @grid: s
 * @height: s
 */
void free_grid(int **grid, int height)
{
height--;
while (height--)
{
free(grid[height]);
}
free(grid[height]);
free(grid);
}
