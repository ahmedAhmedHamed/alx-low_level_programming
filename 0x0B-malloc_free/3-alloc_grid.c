#include "main.h"

/**
 * alloc_grid - hello
 * @width: s
 * @height: s
 * Return: s
 */
int **alloc_grid(int width, int height)
{
    int i = 0;
    int j = 0;
    int **s;
    if (width == 0 || height == 0)
        return (0);
    s = malloc(width);

    for (i = 0; i < width; i++)
    {
        s[i] = malloc(height);
        for (j = 0; j < height; j++)
        {
            s[i][j] = 0;
        }
    }

    return (s);
}
