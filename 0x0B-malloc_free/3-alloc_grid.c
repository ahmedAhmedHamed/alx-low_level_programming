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
    int **s;
    if (width == 0 || height == 0)
        return (0);
    s = malloc(width * height);
    while (i <= width * height)
    {
        s[i] = 0;
        i++;
    }

    return (s);
}
