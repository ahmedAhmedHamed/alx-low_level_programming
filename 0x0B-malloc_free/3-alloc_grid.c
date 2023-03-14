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

s = malloc(sizeof(int *) * height);
if (s == 0)
{
free(s);
return (0);
}

for (i = 0; i < height; i++)
{
s[i] = malloc(sizeof(int) * width);

if (s[i] == 0)
{
while (i != -1)
{
free(s[i]);
i--;
}
free(s);
return (0);
}

if (s[i] == 0)
return (0);
for (j = 0; j < width; j++)
{
s[i][j] = 0;
}
}

return (s);
}
