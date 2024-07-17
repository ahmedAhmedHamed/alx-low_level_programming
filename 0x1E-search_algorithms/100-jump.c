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
	size_t step = 0;
	size_t prev = 0;

	if (array == NULL)
		return (-1);

	while (array[min(step, size - 1)] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", min(step, size - 1),
		 array[min(step, size - 1)]);
		prev = step;
		step += sqrtSize;
		if (step >= size)
			break;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", prev, step);
	if (prev >= size)
	{
		printf("Value checked array[%ld] = [%d]\n", prev,
		 array[prev]);
		return (-1);
	}
	while (array[prev] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev,
		 array[prev]);
		prev++;
		if (prev == min(step + 1, size))
			return (-1);
	}
	printf("Value checked array[%ld] = [%d]\n", prev,
		 array[prev]);
	if (array[prev] == value)
		return (prev);
	printf("Value checked array[%ld] = [%d]\n", prev,
		 array[prev]);

	return (-1);
}
