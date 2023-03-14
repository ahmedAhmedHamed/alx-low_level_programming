#include "main.h"

/**
 * free_grid - hello
 * @grid: s
 * @height: s
 */
void free_grid(int **grid, int height)
{
if (height != 0 && grid != 0 && grid[0] != 0)
{
while (height--)
{
free(grid[height]);
}
free(grid[height]);
free(grid);
}
}
