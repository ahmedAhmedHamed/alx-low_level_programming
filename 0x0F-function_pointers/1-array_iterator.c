#include "function_pointers.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * array_iterator - hello
 * @array: s
 * @size: s
 * @action: s
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i = 0;
if (action == 0)
return;
while (i < size)
{
action(array[i]);
i++;
}
}
