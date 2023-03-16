#include "main.h"

/**
 * array_range - hello
 * @min: s
 * @max: s
 * Return: s
 */
int *array_range(int min, int max)
{
    int i;
    int j = min;
    int *s;
    if (min > max)
        return (0);
    s = malloc((1 + max - min) * sizeof(int));
    for (i = 0; i < (1 + max - min); i++)
    {
        s[i] = j;
        j++;
    }
    return (s);
}
