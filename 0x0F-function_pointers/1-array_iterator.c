#include "function_pointers.h"
/**
 * array_iterator - hello
 * @array: s
 * @size: s
 * @action: s
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
int i = 0;
if (action == 0)
return;
while (i < size)
{
action(array[size]);
i++;
}
}
