#include "./search_algos.h"
#include <math.h>
#define min(X, Y) (((X) < (Y)) ? (X) : (Y))

/**
 * jump_search - jump search
 * @array: input array
 * @size: size of array
 * @value: search target
 * Return: the idx or -1 on fail.
 */
int jump_search(int *array, size_t size, int value)
{
	int sqrtSize = sqrt(size);
	size_t step = sqrtSize;
	size_t prev = 0;

	if (array == NULL)
		return (-1);

	while (array[min(step, size) - 1] < value)
	{
		prev = step;
		step += sqrtSize;
		if (prev >= size)
			return (-1);
	}

	while (array[prev] < value)
	{
		prev++;
		if (prev == min(step, size))
			return (-1);
	}

	if (array[prev] == value)
		return (prev);

	return (-1);
}
