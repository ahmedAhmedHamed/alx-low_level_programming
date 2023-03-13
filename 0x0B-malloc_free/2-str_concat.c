#include "main.h"
/**
 * str_concat - hello
 * @s1: s
 * @s2: s
 * Return: s
 */
char *str_concat(char *s1, char *s2)
{
    int i = 0;
    int j = 0;
    int k = 0;
    char *str;

    if (s1 == 0 && s2 == 0)
        return (0);

    while (s1 != 0 && s1[i] != '\0')
    {
        i++;
    }

    while (s2 != 0 && s2[j] != '\0')
    {
        j++;
    }

    if (i && !j)
    i++;

    if (j && !i)
    j++;

    if (i && j)
    j++;

    str = malloc(i + j);

    while(k <= i)
    {
        str[k] = s1[k];
        k++;
    }
    while (k <= i + j)
    {
        str[k + i] = s2[k];
        k++;
    }
    return (str);
}
