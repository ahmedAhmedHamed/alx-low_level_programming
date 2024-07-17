#include "search_algos.h"

/**
 * linear_search - searches for an int in an array in O(N)
 * @array - array of integers
 * @size - size of array
 * @value -  value we are searching for
 * Return: the idx or -1 on fail
 */
int linear_search(int *array, size_t size, int value)
{
    if (array == NULL)
        return -1;
    for (size_t i = 0; i < size; i++)
    {
        printf("Value checked array[%zu] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return i;
    }
    return -1;
}
