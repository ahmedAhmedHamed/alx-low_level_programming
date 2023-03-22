#include "function_pointers.h"
/**
 * int_index - hello
 * @array: s
 * @size: s
 * @cmp: s
 * Return: s
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
if (array == 0 || size <= 0 || cmp == 0)
return (-1);
while (i < size)
{
if (cmp(array[i]) != 0)
return (i);
i++;
}
return (-1);
}
